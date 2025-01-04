class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int n = s.size();

        unordered_set<char> letters;
        for(int i=0;i<n;i++){
            letters.insert(s[i]);
        }
        int result = 0;

        for(char letter : letters){
            int left_idx = -1;
            int right_idx = -1;

            for(int i=0;i<n;i++){
                if(s[i] == letter){
                    if(left_idx == -1){
                        left_idx = i;
                    }
                    right_idx = i;
                }
            }

            unordered_set<char> st;
            for(int i = left_idx+1;i<right_idx;i++){
                st.insert(s[i]);
            }

            result+=st.size();
        }
        return result;
    }
};