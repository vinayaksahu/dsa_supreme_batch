#include<iostream>
using namespace std;

void print(int arr[], int n) {
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}

void reverse(int arr[], int n) {
    
    for (int i = 0; i < n/2; i++) {
        swap(arr[i], arr[n-i-1]);
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};

    int n = sizeof(arr) / sizeof(int);

    cout<< "Mani gives me these numbers: ";

    print(arr, n);

    cout<< "and I reversed those numbers: ";

    reverse(arr, n);

    print(arr, n);
    

    return 0;
}
