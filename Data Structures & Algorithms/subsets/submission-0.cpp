class Solution {
public:
    void findAll(int i, vector<int>&ds,vector<vector<int>>&ans, vector<int>&nums)
    {
        if(i==nums.size())
        {
            ans.push_back(ds);
            return;
        }
        ds.push_back(nums[i]);
        findAll(i+1, ds,ans,nums);
        ds.pop_back();
        findAll(i+1,ds,ans,nums);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>ds;
        vector<vector<int>>ans;
        findAll(0,ds,ans,nums);
        return ans;
        
    }
};
