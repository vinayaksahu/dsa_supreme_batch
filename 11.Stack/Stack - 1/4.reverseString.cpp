#include<iostream>
#include<stack>
using namespace std;

int main() {
    
    string str = "babbar";

    stack<char> s;

    //push str into stack
    for (int i = 0; i < str.length(); i++) {
        s.push(str[i]);   
    }

    //print stack 
    while (!s.empty()){
        cout << s.top() << " ";
        s.pop();
    } cout << endl;
    

    return 0;
}