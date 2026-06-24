#include<cstring>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int hash[256];
        memset(hash,-1,sizeof(hash));
        int i=0;
        int j=0;
        int maxLength=0;
        while(j<n)
        {
            if(hash[s[j]]!=-1)
            {
                if(hash[s[j]]>=i)
                {
                    i=hash[s[j]]+1;
                }

            }
            int length=j-i+1;
            maxLength=max(maxLength,length);
            hash[s[j]]=j;
            j++;
        }
        return maxLength;
    }
};
