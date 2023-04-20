#include<iostream>
using namespace std;

// Recusive
/* int powerOfTwo(int n) {
    //base case
    if(n == 0)
        return 1;

    //recursive relation
    return 2 * powerOfTwo(n-1);
} */

// Iterative

int sumofNnumbers(int n) {

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + 2;
    }
    return sum;
}

int powerOfNnumber(int n) {

    int power = 1;
    for (int i = 1; i <= n; i++) {
        power = power * 2;
    }
    return power;
}

int main() {

    int n = 5;

    int ans = sumofNnumbers(n);
    cout << "2 the sum of " << n << " numbers = " << ans << endl;

    ans = powerOfNnumber(n);
    cout << "2 the power of " << n << " = " << ans << endl;

    return 0;
}