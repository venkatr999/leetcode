class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int res[n];
        res[0]=nums[0];
        int max1=nums[0];
        for(int i=1;i<n;i++)
        {
            res[i]=max(nums[i],res[i-1]+nums[i]);
            max1=max(max1,res[i]);
        }
        return max1;
    }
};