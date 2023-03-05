#include <iostream>
using namespace std;

int main() {

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int end = n-1;

    //reverse array
    while (start <= end) {
        swap (arr[start], arr[end]);
        start++;
        end--;
    }

    //print array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
