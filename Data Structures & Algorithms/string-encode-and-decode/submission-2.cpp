class Solution {
public:

    string encode(vector<string>& strs) {

        string s="";
        for(auto str:strs)
        {
            s+=to_string(str.length())+"#"+str;
        }
        return s;

    }

    vector<string> decode(string s) {
        vector<string>ans;
        cout<<s<<endl;
        int i=0;
        while(i<s.length())
        {
            int j=i;
            while(s[j]!='#')
            {
                j++;
            }
            int strLen=stoi(s.substr(i,j-i));
            ans.push_back(s.substr(j+1,strLen));
            i=j+1+strLen;
        }
        return ans;
        


    }
};
