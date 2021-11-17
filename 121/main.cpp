//  Best Time to Buy and Sell Stock
// Time Limit exceeded
// Brute Force Algorithm

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxDiff, maxElement, max = 0;
        for(int i=0;i<prices.size();i++){
            maxElement = *max_element(prices.begin()+i, prices.end());
            maxDiff = maxElement - prices[i];
            if(max < maxDiff){
                max = maxDiff;
            }

        }
        return max;
    }
};
