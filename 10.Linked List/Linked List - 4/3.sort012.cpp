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

void sort012DataReplacement(Node* &head) {

    // step A: count 0 1 2
    int zero = 0;
    int one = 0;
    int two = 0;
    Node* temp = head;
    while (temp != NULL) {
        if(temp->data == 0)
            zero++; 
        else if(temp->data == 1)
            one++; 
        else if(temp->data == 2)
            two++;
        temp = temp->next;
    }
    
    // step B: fill 0, 1 & 2s in original LL
    temp = head;
    //fill zero
    while (zero--) {
        temp->data = 0;
        temp = temp->next;
    }
    //fill one
    while (one--) {
        temp->data = 1;
        temp = temp->next;
    }
    //fill two
    while (two--) {
        temp->data = 2;
        temp = temp->next;
    }
}

Node* sort012PointersReplacement(Node* &head) {

    //step A: make 3 dummy Nodes with head and tail
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;

    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;

    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;

    //step B: traverse LL (Isolate nodes and add related dummy nodes)
    Node* curr = head;
    while (curr != NULL) {

        if(curr->data == 0) {
            //isolate the zero wali node from original LL
            Node* temp = curr;
            curr = curr->next;
            temp->next = NULL;

            //and add that node to zeroDummy LL
            zeroTail->next = temp;
            zeroTail = temp;
        }
        else if(curr->data == 1) {
            //isolate the one wali node from original LL
            Node* temp = curr;
            curr = curr->next;
            temp->next = NULL;

            //and add that node to oneDummy LL
            oneTail->next = temp;
            oneTail = temp;
        }
        else if(curr->data == 2) {
            //isolate the two wali node from original LL
            Node* temp = curr;
            curr = curr->next;
            temp->next = NULL;

            //and add that node to twoDummy LL
            twoTail->next = temp;
            twoTail = temp;
        }
    }
    
    //step C:
    //1: remove dummy nodes

    Node* temp = oneHead;
    oneHead = oneHead->next;
    temp->next = NULL;
    delete temp;

    temp = twoHead;
    twoHead = twoHead->next;
    temp->next = NULL;
    delete temp;

    //2: Join dummy LL
    if (oneHead != NULL) {
        zeroTail->next = oneHead;
        if(twoHead != NULL)
            oneTail->next = twoHead;
    } else {
        if(twoHead != NULL)
            zeroTail->next = twoHead;
    }

    temp = zeroHead;
    zeroHead = zeroHead->next;
    temp->next = NULL;
    delete temp;

    //3: return head of dummy LL
    return zeroHead;
}

int main() {

    Node* head = new Node(1); 
    Node* second = new Node(2); 
    Node* third = new Node(0); 
    Node* fourth = new Node(1); 
    Node* fifth = new Node(0); 

    //Link nodes
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    print(head);

    cout << "Sort 0, 1 & 2s: " << endl;
    //sort012DataReplacement(head);
    head = sort012PointersReplacement(head);
    print(head);

    return 0;
}