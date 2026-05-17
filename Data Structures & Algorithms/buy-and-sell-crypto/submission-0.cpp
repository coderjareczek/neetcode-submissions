class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, b = 0;

        for (int s = 1; s < prices.size(); s++) {
            int cur = prices[s] - prices[b];
            profit = max(profit, cur);
            
            if (prices[s] < prices[b]) 
                b = s;
        }

        return profit;        
    }
};
