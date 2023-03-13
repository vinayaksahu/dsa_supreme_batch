#include<iostream>
using namespace std;

int main() {

    int arr[] = {0,1,0,1,1,1,1,0,0,0,0,1,0,1,0,1,1,1,0,0,1,1,0,1};

    int n = sizeof(arr) / sizeof(int);

    //count zero's and one's

    int countZero = 0;
    int countOne = 0;

    for (int i = 0; i < n; i++) {
        if(arr[i] == 0)
            countZero++;
        if(arr[i] == 1)
            countOne++;
    }

    cout << "Zero's: " << countZero << endl;

    cout << "One's: " << countOne << endl;

    return 0;
}