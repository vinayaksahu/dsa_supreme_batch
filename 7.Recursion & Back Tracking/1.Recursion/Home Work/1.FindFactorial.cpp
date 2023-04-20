#include<iostream>
using namespace std;

// Recursive
int fact(int n) {
    //base case
    if(n == 1)
        return 1;

    //recursive relation
    int ans = n * fact(n-1);
    return ans;
}

// Iterative 
/* int fact(int n) {

    int fact = 1;
    for (int i = n; i >= 1; i--) {
        fact = fact * i;
    }

    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;
} */

int main() {

    int n = 5;

    cout << fact(n);

    return 0;
}