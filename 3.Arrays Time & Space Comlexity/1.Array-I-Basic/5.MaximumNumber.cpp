#include <iostream>
#include <limits.h>
using namespace std;

int main() {

    int arr[] = {1, 5, 4, 8 ,4 ,9, 6, 9};

    int size = sizeof(arr) / sizeof(arr[0]);

    int maxi = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] > maxi) {
            maxi = arr[i];
        }
    }
    
    cout << "Maximum number: " << maxi << endl;

    return 0;
}
