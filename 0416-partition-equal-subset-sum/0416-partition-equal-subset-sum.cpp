class Solution {
public:
bool solve(vector<int>& nums,int sum, int i,vector<vector<int>> &dp){
    if(sum==0) return true;
    if(i>= nums.size()){
        if(sum == 0){
            return true;
        }
        return false;
    }
    if(dp[i][sum]!=-1) return dp[i][sum];
    bool take=false,nottake = false;
    if(nums[i]<=sum){
        take = solve(nums,sum-nums[i],i+1,dp);
    }
    nottake = solve(nums,sum,i+1,dp);
    return dp[i][sum] = (take||nottake);
}
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(auto it: nums){
            sum+=it;
        }
        if(sum%2 != 0) return false;
        int n = nums.size();
        sum = sum/2;
        vector<vector<int>> dp(n,vector<int>(sum+1,-1));
        return solve(nums,sum,0,dp);
    }
};