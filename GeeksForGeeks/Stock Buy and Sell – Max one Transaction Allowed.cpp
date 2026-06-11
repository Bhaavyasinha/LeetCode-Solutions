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
/*------------------------------------------------------------------------------
the code the works
--------------------------------------------------------------------------------*/

  
class Solution {
  public:
    int maxProfit(vector<int> &prices) {
        // code here
        int minprice = prices[0];
        int maxprofit = 0;
        int n = prices.size();
        for (int i = 0; i < n; i++){
            if (prices[i] < minprice){
                minprice = prices[i];
            }
            else{
                if (prices[i] - minprice > maxprofit){
                    maxprofit = prices[i] - minprice;
                }
                
            }
        }
        return maxprofit;
    }
};
