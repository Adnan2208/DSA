class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int mini = prices[0];
        int currProfit = -1;

        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < mini)
                mini = prices[i];
            currProfit = prices[i] - mini;
            profit = max(currProfit, profit);
        }

        return profit;
    }
};