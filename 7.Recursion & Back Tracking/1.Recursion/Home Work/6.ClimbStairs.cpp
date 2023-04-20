#include<iostream>
using namespace std;

//Recursive
/* int fib(int n) {
    //base case
    if(n == 0 || n == 1)
        return n;

    //RR
    return fib(n - 1) + fib(n - 2);
}
 */

//Iterative
void Fibonacci(int x) {
    int t1 = 0, t2 = 1, nt;
    // x denotes number of terms
    // t1 denotes term 1
    // t2 denotes term 2
    // nt denotes next term
    cout << "Fibonacci Series: ";
    for (int i = 1; i <= x; ++i) {
        cout << t1 << ", ";
        nt = t1 + t2;
        t1 = t2;
        t2 = nt;
    }
    cout << "\n";
}

int fib(int n) {

    int t1 = 0, t2 = 1, nt;

    for (int i = 2; i < n; ++i) {
        nt = t1 + t2;
        //update t1 and t2
        t1 = t2;
        t2 = nt;
    }
    return nt;
}

int main() {

    int n = 6;

    Fibonacci(n);

    int ans = fib(n);

    cout << n <<"th term of fibonacci series: " << ans << endl;
    
    return 0;
}