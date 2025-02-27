class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int ele = -1;
        for (int i = 0; i < nums.size(); i++) {
            if (count == 0) {
                ele = nums[i];
                count = 1;
            } else if (ele == nums[i]) {
                count++;
            } else {
                count--;
            }
        }
        // count = 0;
        // for (int i = 0; i < nums.size(); i++) {
        //     if (ele == nums[i])
        //         count++;
        // }
        return ele;
    }
};