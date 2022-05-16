class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      vector<pair<int,int>>v;  
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            v.push_back(make_pair(nums[i],i));
        }
        sort(v.begin(),v.end());
        int low=0,high=n-1;
        while(low<=high)
        {
            if(v[low].first+v[high].first==target)
                return {v[low].second,v[high].second};
            else if(v[low].first+v[high].first<target)
                low++;
            else
                high--;
        }
    return {};        
    }   
    
};