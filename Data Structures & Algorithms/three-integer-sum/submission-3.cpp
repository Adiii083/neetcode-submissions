class Solution {
public:
    vector<vector<int>>ans;

    void twoSum(vector<int>nums,int target,int j,int k)
    {
        while(j<k)
        {
        if(nums[j]+nums[k]==target)
        {
            ans.push_back({nums[j],nums[k],-target});
            j++;
            k--;

            while(j<k && nums[j]==nums[j-1]) j++;
            while(j<k && nums[k]==nums[k+1]) k--;
        }
        else if(nums[j]+nums[k]>target)
        {
            k--;
        }
        else
        {
            j++;
        }
        }
    }
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            if(i>0 && nums[i]==nums[i-1]) continue;
            int target= - nums[i];

            twoSum(nums,target,i+1,n-1);
        }
        return ans;
        
    }
};
