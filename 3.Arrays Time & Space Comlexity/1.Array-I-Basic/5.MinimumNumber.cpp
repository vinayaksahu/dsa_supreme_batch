#include<iostream>
#include<limits.h>
using namespace std;

int main() {
    
    int arr[] = {9,8,7,6,3,2,5,4,1,2,8,9,6,5,2,3,5,4,7,8,9};
    int count = sizeof(arr) / sizeof(int);
    int key = 6;
    int mini = INT_MAX;

    for (int i = 0; i < count; i++)
        if(mini > arr[i])
            mini = arr[i];
    cout << mini << endl;

    return 0;
}
