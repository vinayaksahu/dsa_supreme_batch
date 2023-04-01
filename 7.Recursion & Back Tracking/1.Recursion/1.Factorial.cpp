#include<iostream>
using namespace std;

int factorial(int n) {



    int ans = n * factorial(n-1);

    return ans;
}

int main () {

    int n = 5;

    int ans = factorial(n);

    cout << ans;

    return 0;
}