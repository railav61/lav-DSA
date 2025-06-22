class Solution {
public:
    int solve(vector<int>& prices, vector<vector<vector<int>>>& dp, int i,
              int k, int cb) {
        if (i == prices.size() || k == 0) {
            return 0;
        }
        if (dp[i][k][cb] != -1) {
            return dp[i][k][cb];
        }

        if (cb == 1) {
            return dp[i][k][cb] =
                       max(-prices[i] + solve(prices, dp, i + 1, k, 0),
                           0 + solve(prices, dp, i + 1, k, 1));
        }

        return dp[i][k][cb] =
                   max(prices[i] + solve(prices, dp, i + 1, k - 1, 1),
                       0 + solve(prices, dp, i + 1, k, 0));
    }
    int maxProfit(int k, vector<int>& prices) {
        vector<vector<vector<int>>> dp(
            prices.size(), vector<vector<int>>(k + 1, vector<int>(2, -1)));
        return solve(prices, dp, 0, k, 1);
    }
};