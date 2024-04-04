class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> nums2(n);
        for(int i=0;i<n;i++){
            int l= (i+k)%n; 
            nums2[l]=nums[i];
        }
        nums=nums2;
    }
};