class Solution {
public:
    bool isAnagram(string s, string t) {
        int n1=s.length();
        int n2=t.length();
        if(n1!=n2) return false;
        unordered_map<char,int>mpp;
        for(int i=0;i<s.length();i++)
        {
            mpp[s[i]]++;
        }
        for(int i=0;i<n2;i++)
        {
            if(mpp.find(t[i])!=mpp.end())
            {
                mpp[t[i]]--;
            }
            else
            {
                return false;
            }
        }
        for(auto it:mpp)
        {
            if(it.second!=0) return false;
        }
        return true;


        
    }
};
