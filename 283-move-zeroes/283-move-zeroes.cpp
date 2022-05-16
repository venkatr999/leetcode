class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int low=0,n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)
            {
            nums[low]=nums[i];
            low++;
            }
        }
        for(int i=low;i<n;i++)
        {
            nums[i]=0;
        }
        }
};