#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int> &s, int topElement) {
    //base case
    if(s.empty()) {
        s.push(topElement);
        return;
    }

    int temp = s.top();
    s.pop();

    //RC
    solve(s, topElement);

    //BT
    s.push(temp);
}

void inserAtBottomToTopElement(stack<int> &s) {
    //empty case
    if(s.empty()) {
        cout << "Empty stack.";
        return;
    }

    int topElement = s.top();
    s.pop();
    solve(s, topElement);
}

void print(stack<int> s) {
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    } cout << endl;
}

int main() {


    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);

    print(s);

    inserAtBottomToTopElement(s);

    print(s);

    return 0;
}