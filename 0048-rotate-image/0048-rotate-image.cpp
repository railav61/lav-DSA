class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix.size(); j++) {
                if (i < j) {
                    int x = matrix[i][j];
                    matrix[i][j] = matrix[j][i];
                    matrix[j][i] = x;
                }
            }
        }
        int i = 0;
        int j = matrix.size() - 1;
        while (i <= j) {
            for (int x = 0; x < matrix.size(); x++) {
                int a = matrix[x][i];
                matrix[x][i] = matrix[x][j];
                matrix[x][j] = a;
            }
            i++;
            j--;
        }
    }
};