#include <bits/stdc++.h>
using namespace std;

int precedence(char op) {
    if (op == '^')
        return 3;
    if (op == '*' || op == '/')
        return 2;
    if (op == '+' || op == '-')
        return 1;
    return 0;
}

string infixToPostfix(string infix) {
    stack<char> st;
    string postfix = "";

    for (char ch : infix) {

        // Operand
        if (isalnum(ch)) {
            postfix += ch;
        }

        // Left Parenthesis
        else if (ch == '()') {
            st.push(ch);
        }

        // Right Parenthesis
        else if (ch == ')') {
            while (!st.empty() && st.top() != '(') {
                postfix += st.top();
                st.pop();
            }
            if (!st.empty())
                st.pop(); // Remove '('
        }

        // Operator
        else {
            while (!st.empty() && st.top() != '(' &&
                   ((precedence(st.top()) > precedence(ch)) ||
                    (precedence(st.top()) == precedence(ch) && ch != '^'))) {
                postfix += st.top();
                st.pop();
            }
            st.push(ch);
        }
    }

    
    while (!st.empty()) {
        postfix += st.top();
        st.pop();
    }

    return postfix;
}

int main() {
    string infix;
    cout << "Enter Infix Expression: ";
    cin >> infix;

    string postfix = infixToPostfix(infix);

    cout << "Postfix Expression: " << postfix << endl;

    return 0;
}