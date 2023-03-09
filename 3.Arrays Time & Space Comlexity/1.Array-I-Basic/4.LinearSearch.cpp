#include<iostream>
using namespace std;

int main() {

    int arr[] = {1, 2, 4, 5, 7, 8, 9 ,6 ,3};

    int size = sizeof(arr) / sizeof(arr[0]);

    int key = 7;

    int flag = 0;
    int i;
    for (i = 0; i < size; i++) {
        if (key == arr[i]) {
            flag = 1;
            break;
        }
    }

    if (flag) {
        cout << "Key found at index: " << i << endl;
    }
    else {
        cout << "Key not found." << endl;
    }
    
    return 0;
}