class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> temp;
        int a = 0, b = matrix.size() - 1;
        int x = 0, y = matrix[0].size() - 1;
        while (a <= b && x <= y) {
            for (int i = x; i <= y; i++) {
                temp.push_back(matrix[a][i]);
            }
            for (int i = a+1; i <= b; i++) {
                temp.push_back(matrix[i][y]);
            }
            for (int i = y-1; i >= x; i--) {
                if (a == b)
                    break;
                temp.push_back(matrix[b][i]);
            }
            for (int i = b-1; i >= a+1; i--) {
                if (x == y) {
                    break;
                }
                temp.push_back(matrix[i][x]);
            }
            a++;
            y--;
            b--;
            x++;
        }
        return temp;
    }
};