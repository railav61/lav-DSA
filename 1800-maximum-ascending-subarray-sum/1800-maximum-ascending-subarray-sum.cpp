class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maxsum = 0, sum = nums[0];
        int n = nums.size();
        if (n == 1)
            return nums[0];
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] < nums[i + 1]) {
                sum += nums[i + 1];
            } else {
                maxsum = max(sum, maxsum);
                sum = nums[i + 1];
            }
        }
        maxsum = max(sum, maxsum);
        return maxsum;
    }
};