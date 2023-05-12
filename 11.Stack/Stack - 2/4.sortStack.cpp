#include<iostream>
#include<stack>
using namespace std;

void insertSorted(stack<int> &s, int target) {
    //base case
    if(s.empty() || s.top() >= target) {
        s.push(target);
        return;
    }

/*     if(s.top() >= target) {
        s.push(target);
        return;
    } */

    int topElemnt = s.top();
    s.pop();

    //RC
    insertSorted(s, target);

    //BT
    s.push(topElemnt);
    
}

void sortStack(stack<int> &s) {

    //base case
    if(s.empty()) {
        return;
    }

    int topElement = s.top();
    s.pop();

    //RC
    sortStack(s);

    //BT
    insertSorted(s, topElement);

}

void print(stack<int> s) {
    while(!s.empty()) {
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