#include <iostream>
#include <stack>

using namespace std;



int main() {

    // string reversal using stack
    // string s = "Hello!";
    // stack<char> rev;
    // for (auto i: s) {
    //     rev.push(i);
    // }
    // while(!rev.empty()) {
    //     cout << rev.top();
    //     rev.pop();
    // }

    // BALANCED PARENTHESIS:
    string s;
    cin >> s;
    stack<char> st;
    for (auto i: s) {
        if (i == '(' || i == '[' || i == '{') {
            st.push(i);
        } else {
            if (!st.empty()) {
                if (i == ')' && st.top() == '(') 
                    st.pop();
                else if (i == ']' && st.top() == '[')
                    st.pop();
                else if (i == '}' && st.top() == '{')
                    st.pop();
            } else {
                st.push(i); // to make it non empty hence to display "invalid" 
            } 
        }
    }
    if (st.size() == 0) cout << "Balanced!";
    else cout << "Unbalanced!";

    return 0;
}