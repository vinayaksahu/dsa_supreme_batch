#include <iostream>
using namespace std;

int binaryToDecimal(int b){
    int ans;
    int c=0;
    while(b){
        ans=(b % 10) * (1 << c++);
        b/=10;
    }
    return ans;
}