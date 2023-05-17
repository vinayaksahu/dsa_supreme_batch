#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main () {

    int arr[] = {4,3,2,1}; // 7,6,-1-1 // 6,6,-1,-1

//brute force method:   
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++) {
        int ans = -1;
        for (int j = i+1; j < n; j++) {
            if (arr[i] > arr[j]) {
                ans = arr[j];
                break;
            }
        }
        cout << ans << " ";
    }

//stack data structure method:

    

    return 0;
}