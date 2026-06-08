
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(string &c: tokens)
        {
            if(c!="+" && c!="-" && c!="*" && c!="/")
            {
                int num=stoi(c);
                st.push(num);
            }
            else
            {
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                if(c=="+") st.push(a+b);
                else if(c=="-") st.push(b-a);
                else if(c=="*") st.push(b*a);
                else st.push(b/a);
            }
        }
        return st.top();
        
        
    }
};
