#include<iostream>
#include<stack>
using namespace std;

int main() {
    
    //creation
    stack<int> s;

    //insertion
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    //deletion
    s.pop();

    //top element
    cout << "top element: " << s.top() << endl;

    //size
    cout << "no. of elements in stack: " << s.size() << endl;

    //check empty or not
    if(!s.empty())
        cout << "Not Empty." << endl;
    else 
        cout << "Empty." << endl;

    //print stack element
    while (!s.empty()){
        cout << s.top() << " ";
        s.pop();
    } cout << endl;
    

    return 0;
}