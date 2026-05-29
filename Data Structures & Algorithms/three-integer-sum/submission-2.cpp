class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        unordered_map<int,int>freq;
        for(int i=0;i<n;i++)
        {
            freq[nums[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            freq[nums[i]]--;
            if(i>0 && nums[i]==nums[i-1]) continue;
            

            for(int j=i+1;j<n;j++)
            {
                freq[nums[j]]--;
                if(j>i+1 && nums[j]==nums[j-1]) continue;

                int target=-(nums[i]+nums[j]);
                if(freq[target]>0)
                {
                   ans.push_back({nums[i],nums[j],target});
                }

            }
            for(int j=i+1;j<n;j++)
            {
                freq[nums[j]]++;
            }
        }
        return ans;
        
    }
};
