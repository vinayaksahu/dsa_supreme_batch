#include<iostream>
using namespace std;

// Recusive
/* void printReverseCount(int n) {
    //base case
    if(n == 0)
        return;

    //process
    cout << n << " ";

    //recursive relation
    printReverseCount(n-1);
} */

// Iterative
void printReverseCount(int n) {

    for (int i = n; i >= 1; i--) {
        cout << i << " ";
    }
}

int main() {

    int n = 5;

    printReverseCount(n);

    return 0;
}