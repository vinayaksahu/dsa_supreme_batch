#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void print(Node* &head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    } cout << endl;
}

Node* reverse(Node* &head) {
    Node* prev = NULL;
    Node* curr = head;
    Node* forw = curr->next;
    while (curr != NULL) {
        forw = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forw;
    }
    return prev;
}

Node* add2Num(Node* &head1, Node* &head2) {

    //step A: reverse both LL
    head1 = reverse(head1);
    head2 = reverse(head2);
    
    //step B: add both LL
    Node* ansHead = NULL;
    Node* ansTail = NULL;
    int carry = 0;
    while (head1 != NULL && head2 != NULL) {
        int sum = carry + head1->data + head2->data;
        int digit = sum % 10;
        int carry = sum / 10;
        Node* newNode = new Node(digit);
        if (ansHead == NULL) {
            ansHead = newNode;
            ansTail = newNode;
        } else {
            ansTail->next = newNode;
            ansTail = newNode;
        }
        head1 = head1->next;
        head2 = head2->next;
    }

    while (head1 != NULL) {
        int sum = carry + head1->data;
        int digit = sum % 10;
        int carry = sum / 10;
        Node* newNode = new Node(digit);
        ansTail->next = newNode;
        ansTail = newNode;
        head1 = head1->next;
    }
    
    while (head2 != NULL) {
        int sum = carry + head1->data;
        int digit = sum % 10;
        int carry = sum / 10;
        Node* newNode = new Node(digit);
        ansTail->next = newNode;
        ansTail = newNode;
        head2 = head1->next;
    }

    while (carry != 0) {
        int sum = carry;
        int digit = sum % 10;
        int carry = sum / 10;
        Node* newNode = new Node(digit);
        ansTail->next = newNode;
        ansTail = newNode;

    }    
    //step C: reverse ans LL ans return 
    ansHead = reverse(ansHead);
    return ansHead;
}

int main() {

    Node* head1 = new Node(1); 
    Node* second1 = new Node(2); 
    Node* third1 = new Node(0); 
    Node* fourth1 = new Node(1); 
    Node* fifth1 = new Node(0); 
    head1->next = second1;
    second1->next = third1;
    third1->next = fourth1;
    fourth1->next = fifth1;

    Node* head2 = new Node(1); 
    Node* second2 = new Node(2); 
    Node* third2 = new Node(0); 
    head2->next = second2;
    second2->next = third2;

    cout << "2 numbers: " << endl;
    print(head1);
    print(head2);

    cout << "summation of given 2 numbers represented by LL:" << endl;
    //sort012DataReplacement(head);
    Node* ans = add2Num(head1, head2);
    print(ans);

    return 0;
}