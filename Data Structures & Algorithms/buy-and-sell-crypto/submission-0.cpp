class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int mini=prices[0];
        int profit=0;
        for(int i=1;i<n;i++)
        {
            int diff=prices[i]-mini;
            if(diff<=0)
            {
                mini=prices[i];
            }
            else
            profit=max(profit,diff);
        }
        return profit;
        
    }
};
