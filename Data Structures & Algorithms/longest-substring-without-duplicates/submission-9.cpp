class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // Brute force Approach

        int maxLength=0;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            int hash[256]={0};
            for(int j=i;j<n;j++)
            {
                if(hash[s[j]]==1) break;
                maxLength=max(maxLength,j-i+1);
                hash[s[j]]=1;

            }
        }
        return maxLength;
        
    }
};
