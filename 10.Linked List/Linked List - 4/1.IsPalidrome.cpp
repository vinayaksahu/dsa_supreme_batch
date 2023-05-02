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

int findNoOfNodes(Node* &head) {
    Node* temp = head;
    int count = 1;
    while (temp != NULL) {
        temp = temp->next;
        count++;
    }
    return count;
}

Node* findMiddle(Node* &head) {
    int NoOfNodes = findNoOfNodes(head);
    Node* slow = head;
    Node* fast = NULL;
    if(NoOfNodes % 2 == 0)
        fast = head->next;
    else
        fast = head;
    while (fast != NULL) {
        fast = fast->next;
        if (fast != NULL) {
            fast = fast->next;
            slow = slow->next; //middle node
        }   
    }
    return slow;
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

bool checkPalidrome(Node* &head) {
    //find middle
    Node* middle = findMiddle(head);

    //reverse from the middle
    Node* reverseNodeKaHead = reverse(middle->next);

    //compare
    Node* temp1 = head;
    Node* temp2 = reverseNodeKaHead;
    while (temp2 != NULL) {
        if (temp1->data != temp2->data) {
            return false;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return true;
}

int main() {

    Node* head = new Node(10);
    Node* first = new Node(20);
    Node* second = new Node(30);
    Node* third = new Node(30);
    Node* fourth = new Node(30);
    Node* fifth = new Node(20);
    Node* sixth = new Node(10);

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;

    print(head);

    bool isPalidrome = checkPalidrome(head);
    if(isPalidrome)
        cout << "LL is Palidrome.";
    else
        cout << "LL is not Palidrome.";

    return 0;
}