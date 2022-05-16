class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>v;
        int n=nums.size();
        if(n<3)
            return v;
        sort(nums.begin(),nums.end());
        set<vector<int>>s;
       for(int i=0;i<n;i++)
       {
           int low=i+1,high=n-1;
           while(low<high)
           {
               if(nums[low]+nums[high]==-nums[i])
               {
                   s.insert({nums[i],nums[low],nums[high]});
                   low++;
                   high--;
               }
               else if(nums[low]+nums[high]<-nums[i])
               {
                   low++;
               }
               else
                   high--;
           }
       }
        
        for(auto x:s)
            v.push_back(x);
        return v;
    }
};