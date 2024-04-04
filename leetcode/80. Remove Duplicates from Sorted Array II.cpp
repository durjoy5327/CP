class Solution {
public:
    int removeDuplicates(vector<int>& a) {
       int count=0;
        int j=1;
        for(int i=1;i<a.size();i++){
            if(a[i]==a[i-1]){
                count++;
            }
            else count=0;
            
            if(count<2) {
                a[j]=a[i];
                j++;
            }
        }
        return j;
    }
};