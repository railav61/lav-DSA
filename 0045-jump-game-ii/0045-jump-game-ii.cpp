class Solution {
public:
    int jump(vector<int>& nums) {
        int idx = 0;
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            int x = idx;
            idx = max(idx, i + nums[i]);
            if (i != idx)
                count++;
            if (idx >= nums.size()-1)
                break;
        }
        return count;
    }
};