class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || numRows >= s.length())
            return s;
        vector<string> st(numRows);
        int down = false;
        int currIdx = 0;
        for (char c : s) {
            st[currIdx] += c;
            if (currIdx == 0 || currIdx == numRows - 1)
                down = !down;
            currIdx += down ? 1 : -1;
        }
        string result;
        for (const string& row : st) {
            result += row;
        }

        return result;
    }
};