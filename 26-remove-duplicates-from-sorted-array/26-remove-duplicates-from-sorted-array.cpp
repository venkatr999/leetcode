class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
        int n=nums.size(),low=1,temp=nums[0];
        for(int i=1;i<n;i++)
        {
            if(nums[i]!=temp) 
            {
                nums[low]=nums[i];
                temp=nums[i];
                low++;
            }
        }
        return low;
            
    }
};