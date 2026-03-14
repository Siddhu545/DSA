#include <stdio.h>
#include <stack>
#include <string>
using namespace std;

bool isValid(string s) {
    stack<char> st;

    for(int i = 0; i < s.size(); i++) {
        char c = s[i];

        if(c == '(' || c == '{' || c == '[') {
            st.push(c);
        } else {
            if(st.empty()) return false;  // ✅ close bracket but nothing open
            char top = st.top();
            if((c == ')' && top != '(') ||
               (c == '}' && top != '{') ||
               (c == ']' && top != '[')) {
                return false;
            }
            st.pop();
        }
    }
    return st.empty();  // ✅ leftover open brackets = invalid
}

int main() {
    printf("%s\n", isValid("({[]})") ? "valid" : "invalid");
    printf("%s\n", isValid("({[}])") ? "valid" : "invalid");
    printf("%s\n", isValid("(((")   ? "valid" : "invalid");
    printf("%s\n", isValid("()")    ? "valid" : "invalid");
}
