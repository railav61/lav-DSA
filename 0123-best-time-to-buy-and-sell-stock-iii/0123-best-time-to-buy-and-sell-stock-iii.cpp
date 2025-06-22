class Solution {
public:
    int solve(int idx, int buy, int cap, vector<int>& prices,vector<vector<vector<int>>> &dp) {
        if (idx == prices.size() || cap == 0) {
            return 0;
        }
        if(dp[idx][buy][cap]!=-1){
            return dp[idx][buy][cap];
        }
        if(buy==1){
            return dp[idx][buy][cap] =  max(-prices[idx]+solve(idx+1,0,cap,prices,dp),0+solve(idx+1,1,cap,prices,dp));
        }
         return dp[idx][buy][cap] =  max(prices[idx]+solve(idx+1,1,cap-1,prices,dp),0+solve(idx+1,0,cap,prices,dp));
    }

    int maxProfit(vector<int>& prices) {
        vector<vector<vector<int>>> dp(prices.size(),vector<vector<int>>(2,vector<int>(3,-1)));
        return solve(0, 1, 2, prices,dp); 
    }
};