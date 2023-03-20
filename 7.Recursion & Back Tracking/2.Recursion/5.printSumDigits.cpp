#include<iostream>
#include<limits.h>
using namespace std;

/* int digitSumRecusrsive(int n) {
    //base case
    if(n == 0)
        return;
    //1 case solve karo
    if(str[i] == key)
        return true;
    
    //baki recursion
    return digitSum();
} */

int digitSumIterative(int n) {
    int sum = 0;

}

int main() {
    
    int n = 647;

    int ans1 = digitSumIterative(n);

    //int ans2 = digitSumRecusrsive(n);

    cout << "ans1 is: " <<ans1 <<endl;

    //cout << "ans2 is: " <<ans2 <<endl;

    return 0;
}
