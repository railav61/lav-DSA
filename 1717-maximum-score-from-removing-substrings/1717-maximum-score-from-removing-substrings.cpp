class Solution {
public:
    int maximumGain(string s, int x, int y) {
        stack<char> st;
        st.push(s[0]);
        int score = 0;

        string rev = "";

        if (x > y) {
            int i = 1;
            while (i < s.size()) {
                if (st.empty()) {
                    st.push(s[i]);
                    i++;
                    continue;
                }
                char temp = st.top();
                string a = "";
                a += temp;
                a += s[i];

                if (a == "ab") {
                    score += x;
                    st.pop();
                } else {
                    st.push(s[i]);
                }
                i++;
            }

            while (!st.empty()) {
                rev += st.top();
                st.pop();
            }

            i = 0;
            int j = rev.size() - 1;
            while (i <= j) {
                char x = rev[i];
                rev[i] = rev[j];
                rev[j] = x;
                i++;
                j--;
            }
            i = 0;
            while (i < rev.size()) {
                if (st.empty()) {
                    st.push(rev[i]);
                    i++;
                    continue;
                }
                char temp = st.top();
                string a = "";
                a += temp;
                a += rev[i];
                if (a == "ba") {
                    score += y;
                    st.pop();
                } else {
                    st.push(rev[i]);
                }
                i++;
            }
        } else {
            int i = 1;
            while (i < s.size()) {
                if (st.empty()) {
                    st.push(s[i]);
                    i++;
                    continue;
                }
                char temp = st.top();

                string a = "";
                a += temp;
                a += s[i];
                if (a == "ba") {
                    score += y;
                    st.pop();
                } else {
                    st.push(s[i]);
                }
                i++;
            }

            while (!st.empty()) {
                rev += st.top();
                st.pop();
            }

            i = 0;
            int j = rev.size() - 1;
            while (i <= j) {
                char x = rev[i];
                rev[i] = rev[j];
                rev[j] = x;
                i++;
                j--;
            }
            i = 0;
            while (i < rev.size()) {
                if (st.empty()) {
                    st.push(s[i]);
                    i++;
                    continue;
                }
                char temp = st.top();
                string a = "";
                a += temp;
                a += rev[i];
                if (a == "ab") {
                    score += x;
                    st.pop();
                } else {
                    st.push(rev[i]);
                }
                i++;
            }
        }
        return score;
    }
};