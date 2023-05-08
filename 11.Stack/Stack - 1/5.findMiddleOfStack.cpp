#include<iostream>
#include<stack>
using namespace std;

void findMiddle(stack<int> &s, int &totalSize) {
    //if empty stack
    if(s.size() == 0) {
        cout << "Empty stack.";
        return;
    }

    //base case
    if(s.size() == totalSize/2 +1) {
        cout << "Middle element of stack: " << s.top();
        return;
    }
    

    int temp = s.top(); // store top element in temp
    s.pop(); // delete top

    // recursive call
    findMiddle(s, totalSize);  

    // backtrack
    s.push(temp); 
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

    int totalSize = s.size();

    findMiddle(s, totalSize);

    return 0;
}