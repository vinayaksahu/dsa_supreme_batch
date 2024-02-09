#include <iostream>
using namespace std;

int main() {

    int n = 5;

    int* arr = (int*)malloc(n*sizeof(int));

    *(arr+0) = 3;
    *(arr+1) = 6;
    *(arr+2) = 9;

    for (int i = 0; i < n; i++) {
        cout << "Character stored: " << *(arr+i) <<" ";


    return 0;
}
