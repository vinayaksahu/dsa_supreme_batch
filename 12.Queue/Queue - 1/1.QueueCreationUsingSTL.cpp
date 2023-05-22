#include<iostream>
#include<queue>
using namespace std;

int main() {

    //creation
    queue<int> q;

    //insettion
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    //front
    cout << "Front of queue: " << q.front() << endl;

    //size
    cout << "Size of queue(before pop): " << q.size() << endl;

    //removal
    q.pop();

    cout << "Size of queue(after pop): " << q.size() << endl;

    //empty
    if(q.empty())
        cout << "Queue is empty." << endl;
    else
        cout << "Queue is not empty." << endl;

    q.pop();
    q.pop();
    q.pop();
    q.pop();

    if(q.empty())
        cout << "Queue is empty." << endl;
    else
        cout << "Queue is not empty." << endl;

    return 0;
}