class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> v;
        for (int i = 0; i < n - 2; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) 
                continue;
            int left = i + 1;
            int right = n - 1;
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum == 0) {
                    v.push_back({nums[i], nums[left], nums[right]});
                    while (left < right && nums[left] == nums[left + 1]) // Skip duplicates
                        left++;
                    while (left < right && nums[right] == nums[right - 1]) // Skip duplicates
                        right--;
                    left++;
                    right--;
                }
                else if (sum > 0)
                    right--; // Correction: Change to right--
                else
                    left++;
            }
        }
        return v;
    }
};

// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         int n = nums.size();
//         sort(nums.begin(), nums.end());
//         vector<vector<int>> v;
//         set<vector<int>> s;
//         for(int i=0;i<n-2;i++){
//             int left=i+1;
//             int right=n-1;
            
//             while(left<right){
//                 int sum = nums[i]+nums[left]+nums[right];
//                 if(sum==0){
//                     s.insert({ nums[i],nums[left],nums[right]});
//                     right--;
//                     left++;
//                 }
//                 else if(sum>0){
//                     right--;
//                 }
//                 else left++;
//             }
//         }
//         for(auto k: s){
//             v.push_back(k);
//         }
//         return v;
//     }
// };
