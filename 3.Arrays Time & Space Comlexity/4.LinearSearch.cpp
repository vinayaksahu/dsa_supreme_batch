#include <iostream>
using namespace std;

int main() {

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 7;
    int flag = 0;
    //Linear Search
    for (int i = 0; i < size; i++) {
        if (key == arr[i]){
            flag = 1;
            break;
        }
    }

    if (flag) {
        cout << "Present";
    }
    else {
        cout << "Not present";
    }
    
    

    return 0;
}
