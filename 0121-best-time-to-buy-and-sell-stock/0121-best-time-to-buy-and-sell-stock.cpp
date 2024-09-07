class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit=0,maxprof = 0;
        int buyprice = INT_MAX;
        for(int i=0;i<n;i++){
            if(buyprice<prices[i]){
                profit = prices[i]-buyprice;
                maxprof = max(maxprof,profit);
            }
            else{
                buyprice = prices[i];
            }
        }
        return maxprof;
    }
};