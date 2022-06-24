class Solution 
{
public:
    int maxProfit(vector<int>& prices) 
    {
        int l=prices.size();
        int mnv=prices[0];
        int profit=0;
        for(int i=1;i<l;i++)
        {
            if(prices[i]<mnv)
            {
                mnv=prices[i];
            }
            else
            {
                int sum=prices[i]-mnv;
                profit=max(profit,sum);
            }
        }
        return profit;
    }
};