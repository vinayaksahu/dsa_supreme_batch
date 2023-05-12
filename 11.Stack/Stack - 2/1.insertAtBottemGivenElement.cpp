#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &s, int element) {
    //base case
    if(s.empty()) {
        s.push(element);
        return; 
    }

    int temp = s.top();
    s.pop();

    //RC
    insertAtBottom(s, element);

    //BT
    s.push(temp);
}

void print(stack<int> s) {
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    } cout << endl;
}

int main () {

    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);

    print(s);

    int element = 500;

    insertAtBottom(s, element);

    print(s);

    return 0;
}