class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.length();
        sort(s1.begin(),s1.end());
        int n1=s2.length();
        for(int i=0;i<n1;i++)
        {
            string s="";
            for(int j=i;j<n1;j++)
            {
                s+=s2[j];
                if(j-i+1==n)
                {
                    sort(s.begin(),s.end());
                    if(s==s1)
                    {
                        return true;
                        break;
                    }
                }
            }

        }
        return false;
        
    }
};
