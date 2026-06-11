class Solution {
  public:
    int maxProfit(vector<int> &prices) {
        // code here
        int n = prices.size();
        int maxprofit = 0;
        for (int i = 0; i < n; i++){
            int profit = 0;
            for (int j = i + 1; j < n; j++){
                profit = prices[j] - prices[i];
                if (profit > 0){
                    if(profit > maxprofit){
                        maxprofit = profit;
                    }
                }
            }
        }
        return maxprofit;
    }
};
