#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* createNode(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}

void deleteNode(Node*& head, int data) {
    Node* curr = head; 
    Node* prev = nullptr;
    while (/* curr != nullptr &&  */curr->data != data) {
        prev = curr;
        curr = curr->next;
    }
/*     if (curr == nullptr) {
        cout << "Node not found\n";
        return;
    }
    if (prev == nullptr) {
        head = curr->next;
    } else { */
        prev->next = curr->next;
    //}
    delete curr;
}

int main() {
    Node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    head->next->next->next = createNode(4);
    head->next->next->next->next = createNode(5);
    head->next->next->next->next->next = createNode(6);
    head->next->next->next->next->next->next = createNode(7);
    head->next->next->next->next->next->next->next = createNode(8);
    head->next->next->next->next->next->next->next->next = createNode(9);
    head->next->next->next->next->next->next->next->next->next = createNode(10);
    head->next->next->next->next->next->next->next->next->next->next = createNode(11);
    head->next->next->next->next->next->next->next->next->next->next->next = createNode(12);
    head->next->next->next->next->next->next->next->next->next->next->next->next = createNode(13);
    head->next->next->next->next->next->next->next->next->next->next->next->next->next = createNode(14);
    head->next->next->next->next->next->next->next->next->next->next->next->next->next->next = createNode(15);
    head->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next = createNode(16);

    deleteNode(head, 16);

    Node* curr = head;
    while (curr != nullptr) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;

    return 0;
}