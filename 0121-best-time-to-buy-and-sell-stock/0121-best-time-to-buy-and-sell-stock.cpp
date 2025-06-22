class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProf = 0;
        int buyPrice = INT_MAX;
        for(int i=0;i<prices.size();i++){
            buyPrice = min(buyPrice,prices[i]);
            maxProf = max(maxProf,prices[i]-buyPrice);
        }
        return maxProf;
    }
};