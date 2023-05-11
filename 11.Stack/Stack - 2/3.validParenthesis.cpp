#include<iostream>
#include<stack>
using namespace std;


bool isValid(string s) {

//create stack
    stack<char> st;

    //traverse string char by char 
    for(int i = 0; i < s.length(); i++) {
        //and store open brackets only
        char ch = s[i];
        if(ch == '(' || ch == '{' || ch == '[')
            st.push(ch);

        //else match top char of the stack 
        //(opening brackets) to next char(closing brackets) 
        else {
            //not empty -> do something
            if(!st.empty()) {
                 //match top char to next char(closing brackets) 
                char topCh = st.top();
                if ((topCh == '(' && ch == ')') ||
                    (topCh == '{' && ch == '}') ||
                    (topCh == '[' && ch == ']'))
                  st.pop();
                //not match
                else
                  return false;
            }
            //empty -> return false
            else
                return false;
        }
    }

    //after completion of traversing string if stack is empty
    //then return true
    if(st.empty())
        return true;
    //else return false
    else    
        return false;
}

int main() {

    string s = "{}";

    if(isValid(s))
        cout << "true.";
    else 
        cout << "false.";

    return 0;
}