class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int i=nums.size();
        sort(nums.begin(),nums.end());
        return (nums[i-1]-1)*(nums[i-2]-1);



    }
};
