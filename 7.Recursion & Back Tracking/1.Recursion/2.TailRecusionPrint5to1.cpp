#include<iostream>
using namespace std;

void tail (int n) {

    //base case
    if (n == 0)
        return;

    //processing
    cout << n << " ";

    //recursive relation
    tail(n-1);
}

int main () {

    int n = 5;

    tail(n);

    return 0;
}