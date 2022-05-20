class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
       int sum=accumulate(nums.begin(),nums.end(),0);
        int org=(n*(n+1))/2;
        return org-sum;
    }
};