class Solution {
public:
    vector<int>leftMax(vector<int>&height, int n)
    {
        vector<int>ans(n,height[0]);
        int leftMaxi=height[0];
        for(int i=1;i<n;i++)
        {
            ans[i]=max(leftMaxi,height[i]);
            leftMaxi=ans[i];
        }
        return ans;
    }
    vector<int>rightMax(vector<int>&height, int n)
    {
        vector<int>ans(n,height[n-1]);
        int rightMaxi=height[n-1];
        for(int i=n-2;i>=0;i--)
        {
            ans[i]=max(rightMaxi,height[i]);
            rightMaxi=ans[i];
        }
        return ans;
    }

    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>leftMaxi=leftMax(height,n);
        vector<int>rightMaxi=rightMax(height,n);

        int total_area=0;
        for(int i=0;i<n;i++)
        {
            total_area+=min(leftMaxi[i],rightMaxi[i])-height[i];
        }
        return total_area;

          
        
    }
};
