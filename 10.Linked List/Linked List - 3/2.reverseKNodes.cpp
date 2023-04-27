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

int getLength(Node* &head) {
    Node* temp = head;
    int len = 0;
    while (temp != NULL) {
        temp = temp->next;
        len++;
    }
    return len;
}

Node* reverseKNodes(Node* &head, int k) {
    // LL is empty
    if(head == NULL)
        return NULL;

    // K > length
    int len = getLength(head);
    if(k > len)
        return head;

    // K <= length
    // Step A: reverse first K nodes
    Node* prev = NULL;
    Node* curr = head;
    Node* forw = curr->next;
    int count = 0;
    while (count < k) {
        forw = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forw;
        count++;
    }

    // Step B: connect first K nodes to reverse ka ans
    if(forw != NULL)
        head->next = reverseKNodes(forw, k);

    // Step C: return head of new LL i.e. prev
    return prev;
}

int main() {

    Node* head = new Node(10);
    Node* first = new Node(20);
    Node* second = new Node(30);
    Node* third = new Node(40);
    Node* fourth = new Node(50);
    Node* fifth = new Node(60);

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    print(head);

    int len = getLength(head);
    cout << "Length: " << len << endl;

    head = reverseKNodes(head, 2);
    print(head);

    return 0;
}