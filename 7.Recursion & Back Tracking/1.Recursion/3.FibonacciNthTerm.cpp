#include<iostream>
using namespace std;

int fib(int n) {
    //base case
    if(n == 1)
        return 0;
    if(n == 2)
        return 1;
/*     if(n == 0 || n == 1)
        return n; */

    //recursive relation
    return fib(n-1) + fib(n-2);
}

int main() {

    int n = 9;

    cout << fib(n);

    return 0;
}