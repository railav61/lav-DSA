class Solution {
public:
    void swapfn(vector<int>& nums, int x, int y) {
        while (x <= y) {
            int a = nums[x];
            nums[x] = nums[y];
            nums[y] = a;
            x++;
            y--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        swapfn(nums, 0, (nums.size() - 1));
        swapfn(nums, 0, k-1);
        swapfn(nums, k, (nums.size() - 1));
    }
};