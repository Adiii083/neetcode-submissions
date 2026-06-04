class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        string s1="";
        for(int i=0;i<n;i++)
        {
            if(!isalnum(s[i])) continue;
            s1+=tolower(s[i]);

        }
        cout<<s1<<endl;
        int i=0;int j=s1.size()-1;
        while(i<=j)
        {
            if(s1[i]!=s1[j]) return false;
            i++;
            j--;

        }
        return true;
        
    }
};
