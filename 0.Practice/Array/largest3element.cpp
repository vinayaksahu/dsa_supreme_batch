#include <iostream>
#include<limits.h>
using namespace std;

int main() {

    int arr[] = {34,54,57,98,07,85,62,42};

    int count = sizeof(arr) / sizeof(arr[0]);

    int min = arr[0];
    
    for (int i = 0; i < count; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    
    cout << min << endl;

    return 0;
}