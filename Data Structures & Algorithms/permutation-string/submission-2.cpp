class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.length();
        unordered_map<char,int>mpp1;
        for(auto c: s1)
        {
            mpp1[c]++;
        }
        int need=mpp1.size();
        for(int i=0;i<s2.length();i++)
        {
            int curr=0;
            unordered_map<char,int>mpp2;
            for(int j=i;j<s2.length();j++)
            {
                mpp2[s2[j]]++;

                if(mpp1[s2[j]]<mpp2[s2[j]]) break;

                if(mpp1[s2[j]]==mpp2[s2[j]]) curr++;
                
                if(curr==need) return true;


            }
        }
        return false;
    }   
};
