#include <vector>
using namespace std;

class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
       int minI=-1;
        int maxI=-1;
        long long int ans=0;
        int left=-1;
        int current =0;
        int n=nums.size();
        for(int c=0;c<n;c++){
            if(nums[c]==minK){
                minI=c;
            }
            if(nums[c]==maxK){
                maxI=c;
            }
            
            //check element if out of bound 
            if(nums[c]<minK|| nums[c]>maxK){
                left= c;
            }
            if(minI!=-1&& maxI!=-1){
                int  small= min(minI,maxI);
                if((small-left) >0) {
                    ans+=(small-left);
                }
            }
            
        }
        return ans;
    }
};
