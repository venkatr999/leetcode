class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int sum=nums[0];
        int cursum=0;
        for(int i=0;i<n;i++)
        {
            if(cursum<0)
                cursum=0;
            cursum+=nums[i];
            sum=max(sum,cursum);
        }
        return sum;
    }
};