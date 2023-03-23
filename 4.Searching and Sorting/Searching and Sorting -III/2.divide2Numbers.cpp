#include<iostream>
using namespace std;

int divide(int dividend, int divisor) {
    int store = 0;
    int s = 0;
    int e = abs(dividend);
    while(s <= e) {
        int mid = s + (e - s) / 2; //search for quotient
        int quotient = mid;
        if(abs(quotient*divisor) <= abs(dividend)) {
            store = quotient; //store ans
            s = mid + 1; //Right search
        }
        else if(abs(quotient*divisor) > abs(dividend))
            e = mid - 1; //Left search
    }
    if( (dividend<0 && divisor<0) || (dividend>0 && divisor>0))
        return store;
    else    
        return -store;
}

int main() {

    int dividend = 65;
    int divisor = 4;

    int ans = divide(dividend, divisor);
    cout << ans << endl;

    int precision = 5;
    double step = 0.1;
    double finalAns = abs(ans);

    for (int i = 0; i < precision; i++) {
        for (double j = finalAns; j*abs(divisor) <= abs(dividend); j = j+step) {
            finalAns = j;
        } step = step / 10;
    }
     
    if( (dividend<0 && divisor<0) || (dividend>0 && divisor>0))
        cout << finalAns << endl;
    else    
        cout << -finalAns << endl;  

    return 0;
}