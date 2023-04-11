#include<iostream>
using namespace std;

class Node {

    public:
        //create node parts
        int data; //first part of node
        Node* next; //second part of node

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

    Node* first = new Node(10); //node created named "first" pointing to NULL
    Node* second = new Node(20); //node created named "second" pointing to NULL
    Node* third = new Node(30); //node created named "third" pointing to NULL
    Node* fourth = new Node(40); //node created named "fourth" pointing to NULL
    Node* fifth = new Node(50); //node created named "fifth" pointing to NULL

    return 0;
}