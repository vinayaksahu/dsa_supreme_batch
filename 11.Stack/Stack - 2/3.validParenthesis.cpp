#include<iostream>
#include<stack>
using namespace std;

bool isValid(string s) {

    stack<char> st;

    //traverse every char of string
    for (int i = 0; i < s.length(); i++) {
        //open brackets
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            st.push(s[i]);
        }

        //closing brackets
        else {
            //check empty
            if (!st.empty()) {

                //match cases
                if (st.top() == '(' && s[i] == ')') {
                    st.pop();
                }
                else if (st.top() == '{' && s[i] == '}') {
                    st.pop();
                }
                else if (st.top() == '[' && s[i] == ']') {
                    st.pop();
                } else { // not match
                    return false;
                }
            }
            //not empty
            else { 
                return false;
            }
            
        }            
    }

    //after traversing
    if (st.empty()) {
        return true;
    } else {
        return false;
    }
    
}

int main() {

    string s = "[()}]";

    if(isValid(s))
        cout << "True";
    else
        cout << "False";

    return 0;
}