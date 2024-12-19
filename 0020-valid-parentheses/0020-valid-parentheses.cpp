class Solution {
public:
    bool isValid(string s) {
    stack<char> st;
    unordered_map<char, char> brackets = {{')', '('}, {'}', '{'}, {']', '['}};
    
    for (char ch : s) {
        if (brackets.count(ch)) {
            if (!st.empty() && st.top() == brackets[ch]) {
                st.pop(); 
            } else {
                return false; 
            }
        } else { 
            st.push(ch);
        }
    }
    return st.empty(); 
}
};