class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(char i : s){
            if(!st.empty() && (st.top() + 1 == i || st.top() + 2 == i || st.top()+ 2 == i))
            st.pop();
            else
            st.push(i);
        }



        if(st.empty())
        return true;

        return false;
    }
};