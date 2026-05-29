class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxLength=0;
        int n=nums.size();
        if(n==0 || n==1) return n;
        sort(nums.begin(),nums.end());

        int length=1;
        for(int i=1;i<n;i++)
        {
            if((nums[i]-nums[i-1]==1) || (nums[i]-nums[i-1]==0))
            {
                if(nums[i]-nums[i-1]==1)
                length++;
            }
            else
            {
                maxLength=max(maxLength,length);
                length=1;
            }
            maxLength=max(maxLength,length);

        }
        return maxLength;
        
    }
};
