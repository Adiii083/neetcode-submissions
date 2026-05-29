class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.length();
        int maxLength=0;
        for(int i=0;i<n;i++)
        {
            unordered_map<char,int>freq;
            int maxfreq=0;
            for(int j=i;j<n;j++)
            {
                freq[s[j]]++;
                maxfreq=max(maxfreq,freq[s[j]]);
                int length=j-i+1;
                if(length-maxfreq<=k)
                {
                    maxLength=max(maxLength,length);
                }
                else
                break;
            }
        }
        return maxLength;
    }
};
