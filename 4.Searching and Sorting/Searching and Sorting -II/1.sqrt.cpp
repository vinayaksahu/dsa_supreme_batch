#include<iostream>
#include<vector>
using namespace std;

int findSqrt(int n) {
    int ans = -1;
    int s = 0;
    int e = n-1;
    while(s <= e) {
    int mid = s + (e - s) / 2;
        if(mid*mid == n)
            return mid;
        if(mid*mid > n)
            e = mid - 1;
        else if(mid*mid < n){
            s = mid + 1; 
            ans = mid;
        }
    }
    return ans;
}

int main() {

    int n = 26;
    
    int ans = findSqrt(n);

    cout << "Squre root of " << n << " is: " << ans << endl;

    int precision = 5;
    double step = 0.1;
    double finalAns = ans;

    for (int i = 0; i < precision; i++) {
        for (double j = finalAns; j*j <= n; j = j + step) {
            finalAns = j;
        } step = step / 10;
    }

    cout << "Squre root of in decimal" << n << " is: " << finalAns << endl;
    
    return 0;
}