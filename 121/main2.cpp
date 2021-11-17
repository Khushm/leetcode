// Best Time to Buy and Sell Stock
// Greedy Algorithm

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=numeric_limits<int>::max();
        int max = 0, maxDiff;
        for(int i=0;i<prices.size();i++){
            if(buy> prices[i])
                buy = prices[i];

            maxDiff = prices[i] - buy;
            if(max < maxDiff){
                max = maxDiff;
            }
        }
        return max;
    }
};
