class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();

        //next smaller element
        vector<int>nse(n,n);
        stack<int>st;
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && heights[i]<heights[st.top()])
            {
                int index=st.top();
                st.pop();
                nse[index]=i;
            }
            st.push(i);
        }
        for(auto &x:nse)
        {
            cout<<x<<" ";
        }
        cout<<endl;

        // previous smaller element
        vector<int>pse(n,-1);
        stack<int>st1;

        for(int i=n-1;i>=0;i--)
        {
            while(!st1.empty() && heights[i]<heights[st1.top()] )
            {
                int index=st1.top();
                st1.pop();
                pse[index]=i;
            }
            st1.push(i);
        }
        for(auto &x:pse)
        {
            cout<<x<<" ";
        }

        int area=0;
        for(int i=0;i<n;i++)
        {
            area=max(area,heights[i]*(nse[i]-pse[i]-1));
        }
        return area;       
    }
};
