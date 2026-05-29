class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,bool>mpp;
    for(int i=0;i<n;i++)
    {
        if(mpp.find(nums[i])!=mpp.end())
        return true;
        else
        mpp.insert({nums[i],true});
    }
    
    return false;

        
    }
};