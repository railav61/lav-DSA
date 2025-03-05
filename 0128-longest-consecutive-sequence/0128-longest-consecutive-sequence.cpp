class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0)
            return 0;
        if (nums.size() == 1)
            return 1;
        set<int> temp;
        int count = 1;
        int x = 1;
        for (int i = 0; i < nums.size(); i++) {
            temp.insert(nums[i]);
        }
        for (int i = 0; i < nums.size(); i++) {
            if (temp.find(nums[i] - 1) == temp.end()) {
                int a = nums[i];
                while (temp.find(a + 1) != temp.end()) {
                    a++;
                    x++;
                }
            } else {
                x = 1;
            }
            count = max(x, count);
            x = 1;
        }
        return count;
    }
};