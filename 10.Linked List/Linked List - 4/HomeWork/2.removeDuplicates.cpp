#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void print(Node* &head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    } cout << endl;
}

void removeDuplicates(Node* &head) {

    if (head == NULL) {
            return;
    }

    Node* i = head;
    while (i != NULL) { 
        Node* prev = i;
        Node* j = i->next;
        while (j != NULL) {
            if ((i->next != NULL) && (i->data == j->data)) {
                prev->next = j->next;
                j->next = NULL;
                delete j;
                j = prev->next;
            } else {
                prev = j;
                j = j->next;
            }
        }
        i = i->next;
    }
}

int main() {

    Node* head = new Node{1, 
                 new Node{2, 
                 new Node{3, 
                 new Node{2, 
                 new Node{4, 
                 NULL}}}}};

    print(head);

    cout << "Remove duplicates: " << endl;
    removeDuplicates(head);
    print(head);

    return 0;
}