class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> mpp;
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                if (matrix[i][j] == 0) {
                    mpp.push_back({i, j});
                }
            }
        }
        for (int i = 0; i < mpp.size(); i++) {
            int a = mpp[i][0];
            int b = mpp[i][1];
            for (int x = 0; x < matrix[0].size(); x++) {
                matrix[a][x] = 0;
            }
            for (int x = 0; x < matrix.size(); x++) {
                matrix[x][b] = 0;
            }
        }
    }
};