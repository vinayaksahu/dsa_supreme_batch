#include<iostream>
using namespace std;

//Recursive 
void printDigit(int n) {
    //base case
    if(n == 0)
        return;

    //Processing
    int ans = n % 10;
    n = n / 10;

    //RR
    printDigit(n);

    //print 
    cout << ans << " ";
}

//Iterative
/* void printDigit(int n) {
    int ans = 0;
    while (n != 0) {
        ans = n % 10;
        n = n / 10;
        cout << ans << " ";
    }
} */

int main() {

    int n = 123;

    printDigit(n);
    
    return 0;
}