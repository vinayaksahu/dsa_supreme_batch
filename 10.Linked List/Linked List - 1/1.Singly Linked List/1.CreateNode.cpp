#include<iostream>
using namespace std;

class Node {

    public:

        //create node
        int data; //first part of node => integer data
        Node* next; //second part of node => next pointer
};

int main () {

    Node* head = new Node(); //node created named "head"

    return 0;
}