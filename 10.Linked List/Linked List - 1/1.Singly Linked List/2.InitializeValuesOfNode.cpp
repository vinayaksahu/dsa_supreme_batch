#include<iostream>
using namespace std;

class Node {

    public:
        
        //create node parts
        int data; //first part of node
        Node* next; //second part of node

        //initialize Node "data" and "pointer" using constructor
        Node() {
            this->data = 0;
            this->next = NULL;
        }

        Node(int data) {
            this->data = data;
            this->next = NULL;
        }

};

int main() {

    Node* head = new Node(); //create object for Node class

    return 0;
}