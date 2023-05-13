#include<iostream>
#include<stack>
using namespace std;

void insertSorted(stack<int> &s, int topElement) {
    //base case
    if (s.empty() || s.top() >= topElement) {
        s.push(topElement);
        return;
    }
    
    int temp = s.top();
    s.pop();

    //RC
    insertSorted(s, topElement);

    //BT
    s.push(temp);
}

void sortStack(stack<int> &s) {
    //base case
    if(s.empty())
        return;

    int topElement = s.top();
    s.pop();

    //RC
    sortStack(s);

    //BT
    insertSorted(s, topElement);
} 

void print(stack<int> s) {
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    } cout << endl;
}

int main() {

    stack<int> s;

    s.push(7);
    s.push(11);
    s.push(3);
    s.push(5);
    s.push(9);

    print(s);

    sortStack(s);

    print(s);

    return 0;
}