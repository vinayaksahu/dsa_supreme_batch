#include <iostream>
#include <limits.h>
using namespace std;

int main() {

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int maxi = -1;//INT_MIN;
    //Maximum number
    for (int i = 0; i < size; i++){
        if (arr[i] > maxi){
            maxi = arr[i];
        }
    }

    cout << "Maximum number: " << maxi;

    return 0;
}
