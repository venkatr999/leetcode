class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int steps=nums[0];
        for(int i=1;i<n;i++)
        {
            if(steps<i)
                return false;
            steps=max(steps,i+nums[i]);
        }
        return true;
    }
};