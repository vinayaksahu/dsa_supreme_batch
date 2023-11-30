#include <stdio.h>
#include <stdlib.h>

// Definition of a singly linked list node
struct ListNode {
    int val;
    struct ListNode* next;
};

// Function to merge two sorted linked lists
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode dummy; // Dummy node to simplify handling of the merged list
    struct ListNode* current = &dummy; // Pointer to the current node in mergedList

    struct ListNode* ptr1 = list1;
    struct ListNode* ptr2 = list2;

    // Iterate while both ptr1 and ptr2 are not NULL
    while (ptr1 != NULL && ptr2 != NULL) {
        if (ptr1->val < ptr2->val) {
            current->next = ptr1;
            ptr1 = ptr1->next;
        } else {
            current->next = ptr2;
            ptr2 = ptr2->next;
        }
        current = current->next;
    }

    // If there are remaining nodes in list1 or list2, append them to mergedList
    if (ptr1 != NULL) {
        current->next = ptr1;
    } else {
        current->next = ptr2;
    }

    return dummy.next; // The merged list starts from the next of the dummy node
}

// Function to create a new node with the given value
struct ListNode* createNode(int val) {
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a new node at the end of the linked list
void insertAtEnd(struct ListNode head, int val) {
    struct ListNode* newNode = createNode(val);
    if (*head == NULL) {
        *head = newNode;
    } else {
        struct ListNode* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}
