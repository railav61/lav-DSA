class Solution {
public:
    void fun(vector<int>& arr, vector<int>& x, vector<vector<int>>& temp,
             int idx, int target) {
        if (idx >= arr.size()) {
            if (target==0) {
                temp.push_back(x);
            }
            return;
        }
        if (arr[idx] <= target) {
            x.push_back(arr[idx]);
            fun(arr, x, temp, idx, target - arr[idx]);
            x.pop_back();
        }
        fun(arr, x, temp, idx + 1, target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> temp;
        vector<int> x;
        fun(candidates, x, temp, 0, target);
        return temp;
    }
};