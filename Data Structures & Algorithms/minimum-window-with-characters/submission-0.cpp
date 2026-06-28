class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.length();
        int m=t.length();

        int hash[256]={0};
        for(auto c: t)
        {
            hash[c]++;
        }
        int i=0; int j=0;
        int minLen=INT_MAX;
        int startIdn=-1;
        int count=0;

        while(j<n)
        {
            if(hash[s[j]]>0) count++;
            hash[s[j]]--;

            while(count==m)
            {
                if(j-i+1<minLen)
                {
                    minLen=j-i+1;
                    startIdn=i;
                }
                hash[s[i]]++;
                if(hash[s[i]]>0) count--;
                i++;
            }
            j++;
        }
        return startIdn==-1 ? "": s.substr(startIdn,minLen);
        
    }
};
