class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        sort(nums.begin(),nums.end());

        int count=1;
        int maxCount=1;

        for(int i=1;i<n;i++)
        {
            if(nums[i]-nums[i-1]==0)
            continue;

            if(nums[i]-nums[i-1]==1)
            {
                count++;
                maxCount=max(maxCount,count);

            } 
            else 
            {
                count=1;
            }
        }
        return maxCount;
    

        
    }
};
