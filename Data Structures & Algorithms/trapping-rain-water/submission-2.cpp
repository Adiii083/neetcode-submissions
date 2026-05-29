class Solution {
public:
    vector<int>find_leftMax(vector<int>height,int n)
    {
        vector<int>leftMax(n);
        leftMax[0]=height[0];
        int leftMaxi=leftMax[0];
        for(int i=1;i<n;i++)
        {
            if(height[i]>=leftMaxi)
            {
                leftMaxi=height[i];
                leftMax[i]=leftMaxi;
            }
            else
            {
                leftMax[i]=leftMaxi;
            }

        }
        for(auto x:leftMax)
        {
            cout<<x<<" ";
        }
        cout<<endl;
        return leftMax;

    }
    vector<int>find_rightMax(vector<int>height,int n)
    {
        vector<int>rightMax(n);
        rightMax[n-1]=height[n-1];
        int rightMaxi=height[n-1];

        for(int i=n-2;i>=0;i--)
        {
            if(height[i]>=rightMaxi)
            {
                rightMaxi=height[i];
                rightMax[i]=rightMaxi;
            }
            else
            {
                rightMax[i]=rightMaxi;
            }
        }
        for(auto x:rightMax)
        {
            cout<<x<<" ";
        }
        return rightMax;

        
    }
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>leftMax=find_leftMax(height,n);
        vector<int>rightMax=find_rightMax(height,n);

         int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=min(leftMax[i],rightMax[i])-height[i];
        }
        return sum;
        
    }
};
