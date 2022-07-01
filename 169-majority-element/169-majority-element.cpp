class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int k=n/2;
        sort(nums.begin(),nums.end());
        int i=0;
        while(i<n)
        {
            if(nums[i]==nums[i+k])
            {
                return nums[i];
            }
            i++;
        }
        return nums[0];
    }
};