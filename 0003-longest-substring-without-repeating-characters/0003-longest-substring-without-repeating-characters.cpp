class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> v(256, -1);
        int l = 0, r = 0;
        int maxLen = 0;
        int n = s.size();
        while (r < n) {
            if (v[s[r]] != -1) {
                if (v[s[r]] >= l) {
                    l = v[s[r]] + 1;
                }
            }
            maxLen = max(maxLen, r - l + 1);
            v[s[r]] = r;
            r++;
        }
        return maxLen;
    }
};