class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0;
        int right = 1;
        int max = 0;
        int profit;
        while(right < prices.size()){
            if(prices[left] > prices[right]){
                left = right;
            }else{
                profit = prices[right] - prices[left];
                if(profit > max){
                    max = profit;
                }
            }
            right++;
        }
        return max;
    }
};
