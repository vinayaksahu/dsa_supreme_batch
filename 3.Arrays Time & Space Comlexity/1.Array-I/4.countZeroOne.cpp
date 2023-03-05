#include <iostream>
using namespace std;

int main() {

    int arr[] = {0, 0, 1, 0, 1, 1, 1, 0, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    int countZero = 0;
    int countOne = 0;

    //Linear Search
    for (int i = 0; i < size; i++) {
        if (arr[i] == 0){
            countZero++;
        }
        if (arr[i] == 1){
            countOne++;
        }
    }

    cout << "0's: " << countZero << endl;
    cout << "1's: " << countOne << endl;

    return 0;
}
