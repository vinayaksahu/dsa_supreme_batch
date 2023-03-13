#include<iostream>
using namespace std;

void findKey(int arr[], int n, int k) {

    for (int i = 0; i < n; i++) {
        if(arr[i] == k) {
            cout << "Key found at index: " << i;
            return;
        }
    }

    cout << "Key not found.";
}

int main() {

    int arr[] = {1, 2, 4, 5, 7, 8, 9 ,6 ,3};

    int size = sizeof(arr) / sizeof(arr[0]);

    int key = 17;

    findKey(arr, size, key);
    
    return 0;
}