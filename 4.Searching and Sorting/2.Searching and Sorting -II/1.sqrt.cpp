#include<iostream>
#include<vector>
using namespace std;

int findSqrt(int n) {
    int ans = -1;
    int s = 0;
    int e = n;
    while(s < e) {
        int mid = s + (e - s) / 2;
        if(mid*mid == n)
            return mid;
        else if(mid*mid < n) {
            ans = mid;
            s = mid + 1; //search right
        }
        else if(mid*mid > n)
            e = mid - 1; //search left
    }
    return ans;
}

int main() {

    int n = 50;

    int ans = findSqrt(n);

    cout << "Squar Root of " << n << " is: " << ans << endl;

    int precision = 5;
    double step = 0.1;
    double finalAns = ans; 
    
    for (int i = 0; i < precision; i++) {
        for (double j = finalAns; j*j <= n; j = j + step) {
            finalAns = j;
        }   step = step / 10;  
    }

    cout << "Squar Root of " << n << " with precision " << precision << " is: " << finalAns << endl;

    return 0;
}