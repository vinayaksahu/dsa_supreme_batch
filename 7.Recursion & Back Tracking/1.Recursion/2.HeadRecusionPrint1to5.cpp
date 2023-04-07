#include<iostream>
using namespace std;

void head (int n) {

    //base case
    if (n == 0)
        return;

    //recursive relation
    head(n-1);

    //processing
    cout << n << " ";
}

int main () {

    int n = 5;

    head(n);

    return 0;
}