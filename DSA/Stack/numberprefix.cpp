// #include <iostream>
// #include <stack>
// #include <cmath>
// using namespace std;

// int main() {
    
//     // Prefix expression
//     string prefix = "- + * 2 3 * 5 4 9";
//     stack<int> st;
//     reverse(prefix.begin(), prefix.end());
     
//     for (char ch : prefix) 
//     {
//         if(isdigit(ch)) 
//         {
//             st.push(ch - '0');
//         } 
//         else 
//         {
//             int a = st.top(); st.pop();
//             int b = st.top(); st.pop();
//     }

//     int result;

//             switch (ch) {
//                 case '+':
//                    result = a + b;
//                     break;
//                 case '-':
//                     result = a - b;
//                     break;
//                 case '*':
//                     result = a * b;
//                     break;
//                 case '/':
//                     result = a / b;
//                     break;
//                 case '^':
//                     result = pow(a, b);
//                     break;
//             }
//         }

//         cout << "Result = " << result << endl;

//     return 0;

//     }

    