class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
   int size = nums.size(), ans = INT_MAX;
        for(int i = 0; i < size; i++){
            int OR_value = 0;
            for(int j = i; j < size; j++){
                OR_value = OR_value | nums[j];
                if(OR_value >= k){
                    ans = min(ans, (j - i) + 1);
                }
            }
        }
        if(ans == INT_MAX) return -1;
        else return ans;
    }
};