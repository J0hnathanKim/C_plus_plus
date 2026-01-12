// 1) 괄호 맞추기 (Valid Parentheses) - Stack
// - (), {}, [] 가 올바르게 닫히는지 검사
#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValidParentheses(const string& s) {
    stack<char> st;

    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        } else if (c == ')' || c == '}' || c == ']') {
            if (st.empty()) return false;

            char top = st.top();
            st.pop();

            if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '[')) {
                return false;
            }
        } else {
            // 괄호 외 문자가 들어오면 무시하거나 false 처리 가능
            // 코테에선 보통 괄호만 들어온다고 가정함
        }
    }

    return st.empty();
}

int main() {
    string s1 = "([]{})";
    string s2 = "([)]";

    cout << s1 << " -> " << (isValidParentheses(s1) ? "YES" : "NO") << "\n";
    cout << s2 << " -> " << (isValidParentheses(s2) ? "YES" : "NO") << "\n";
    return 0;
}
