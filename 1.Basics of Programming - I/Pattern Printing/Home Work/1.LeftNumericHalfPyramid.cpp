#include<iostream>
using namespace std;

int main() {
    
    int n = 5;

    for (int i = 0; i < n; i++) {
        for (int j = 1; j < i+1; j++) { // Left Half Pyramid (j<i)
            cout << j;
        } cout << endl;
    }
        

    return 0;
}

/*
1
12
123
1234
*/