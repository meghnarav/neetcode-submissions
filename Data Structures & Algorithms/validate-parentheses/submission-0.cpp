class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            char c = s[i];
            if (c == '[' || c == '{' || c == '(') {
                st.push(c);
            } else {
                if (st.empty()) return false;
                if (c == ']') {
                    if (st.top() == '[') {
                        st.pop();
                    } else {
                        return false;
                    }
                } else if (c == '}') {
                    if (st.top() == '{') {
                        st.pop();
                    } else {
                        return false;
                    }
                } else if (c == ')') {
                    if (st.top() == '(') {
                        st.pop();
                    } else {
                        return false;
                    }
                }
            }
        }
        if (st.empty()) return true;
        return false;
    }
};