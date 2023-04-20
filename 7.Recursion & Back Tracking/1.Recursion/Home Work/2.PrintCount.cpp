#include<iostream>
using namespace std;

// Recusive
void printCount(int n) {
    //base case
    if(n == 0)
        return;

    //recursive relation
    printCount(n-1);

    //process
    cout << n << " ";
}

// Iterative
/* void printCount(int n) {

    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
}
 */

int main() {

    int n = 5;

    printCount(n);

    return 0;
}