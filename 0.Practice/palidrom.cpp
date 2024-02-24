#include<iostream>
#include<vector>
using namespace std;

int checkPalidrom(int num) {

    vector<int> digit;
    int n = 0;
    while(num) {
        int ele = num % 10;
        digit.push_back(ele);
        num /= 10;
        n++;
    }

    int flag = 0;
    for (int i = 0; i < n; i++) {
        if(digit[i] != digit[n-i-1]) {
            flag = 1;
            break;
        }
    }

    if(flag == 1) 
        return 0; 
    else 
        return 1;
}

int palidromicArray(vector<int> arr) {

    int flag = 0;
    for(int i = 0; i < arr.size(); i++) {
        if(!checkPalidrom(arr[i])) {
            flag = 1;
            break;
        }
    }
    if(flag == 1) 
        return 0; 
    else 
        return 1; 
}

int main() {

    vector<int> arr{121, 212, 545, 7667, 15951};

    bool pA = palidromicArray(arr);

    (pA == true) ? cout << "true" : cout << "false";

    return 0;
}