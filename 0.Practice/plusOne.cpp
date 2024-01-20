#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int plusOne(vector<int>& digits) {
    
    int n = digits.size();
    int num = 0;
    for(int i = 0; i < n; i++) {
        num = pow(10,i) + digits[i];
    }
    return num;
}

int main() {

    vector<int> arr{1,2,3,4};

    cout << plusOne(arr);
}