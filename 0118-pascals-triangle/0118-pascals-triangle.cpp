class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> temp(numRows);
        for (int i = 0; i < numRows; i++) {
            temp[i] = vector<int>(i + 1, 1);
            for (int j = 1; j < i; j++) {
                temp[i][j] = temp[i - 1][j] + temp[i - 1][j - 1];
            }
        }
        return temp;
    }
};