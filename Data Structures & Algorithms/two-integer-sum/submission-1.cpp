class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mpp;
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            int remaining=target-nums[i];
            if(mpp.find(remaining)!=mpp.end())
            {
                return {mpp[remaining],i};
                
            }
            mpp[nums[i]]=i;

        }
    
        




    }
};
