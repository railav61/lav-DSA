class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count1 = 0;
        int count2 = 0;
        int num1 = NULL;
        int num2 = NULL;
        for (int i = 0; i < n; i++) {
            if (num1 == nums[i]) {
                count1++;
            } else if (num2 == nums[i]) {
                count2++;
            } else if (count1 == 0) {
                num1 = nums[i];
                count1 = 1;
            } else if (count2 == 0) {
                num2 = nums[i];
                count2 = 1;
            } else {
                count1--;
                count2--;
            }
        }

        vector<int> v;
        int freq1 = 0, freq2 = 0;
        for (int& num : nums) {
            if (num == num1) {
                freq1++;
            } else if (num == num2) {
                freq2++;
            }
        }
        if (freq1 > floor(n / 3))
            v.push_back(num1);
        if (freq2 > floor(n / 3))
            v.push_back(num2);
        return v;
    }
};