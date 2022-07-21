class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool in=true;
        bool de=true;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]>nums[i])
            {
                in=false;
                break;
            }
            
        }
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]<nums[i])
            {
                de=false;
                break;
            }
            
        }
        return in || de;
        
    }
};