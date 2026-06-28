class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();

        vector<int>ans;
        for(int i=0;i<n-(k-1);i++)
        {
            int maxi=INT_MIN;

            for(int j=i;j<n;j++)
            {
                if(j-i+1<=k)
                {
                    maxi=max(maxi, nums[j]);
                }
                else break;
            }
            ans.push_back(maxi);
        }
        return ans;
        
    }
};
