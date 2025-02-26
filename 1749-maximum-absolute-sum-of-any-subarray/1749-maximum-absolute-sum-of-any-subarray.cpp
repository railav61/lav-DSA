class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxsum = nums[0], minsum = nums[0], curmaxsum = nums[0],
            curminsum = nums[0];
        int n = nums.size();
        if (n == 1)
            return abs(nums[0]);
        for (int i = 1; i < n; i++) {
            curmaxsum = max(nums[i], curmaxsum + nums[i]);
            maxsum = max(maxsum, curmaxsum);
            curminsum = min(nums[i], curminsum + nums[i]);
            minsum = min(minsum, curminsum);
        }

        return abs(maxsum) > abs(minsum) ? abs(maxsum) : abs(minsum);
    }
};