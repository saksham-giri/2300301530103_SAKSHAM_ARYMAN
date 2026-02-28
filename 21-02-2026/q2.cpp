// 121. Best Time to Buy and Sell Stock

class Solution {
public:
    int maxProfit(vector<int>& prices) {
            int buy= prices[0];
            int profit=0;
            for(int i=1;i<prices.size();i++){
                if(prices[i]<buy) buy=prices[i];
                if(profit<prices[i]-buy) profit=prices[i]-buy;
            }
            return profit;
    }
};