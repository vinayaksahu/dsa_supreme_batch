#include<iostream>
#include<stack>
using namespace std;

void findMiddle(stack<int> &s, int &totalSize, int element) {
    //base case
    if(s.size() == 0) {
        cout  << "Empty stack." << endl;
        return;
    }
    if(s.size() == totalSize/2 + 1) {
        s.push(element);
        return;
    }

    int temp = s.top();
    s.pop();

    //recursion
    findMiddle(s, totalSize, element);

    //backtrack
    s.push(temp);
}

void print(stack<int> &s) {
    
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
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

    int element = 100;
    int totalSize = s.size();
    findMiddle(s, totalSize, element);

    print(s);

    return 0;
}