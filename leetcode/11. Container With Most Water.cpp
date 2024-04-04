class Solution {
public:
    int maxArea(vector<int>& height) {
        int j= height.size()-1;
        int i=0;
        int ans=0;
        
        
       while(i<j){
           
           long long value = min(height[i], height[j]) * (j - i);
               if(height[i]>height[j]){
                   j--;
                   if(ans<value) ans=value;
               }
               else{
                   i++;
                   if(ans<value) ans=value;
               }
       }
        return ans;
    }
};