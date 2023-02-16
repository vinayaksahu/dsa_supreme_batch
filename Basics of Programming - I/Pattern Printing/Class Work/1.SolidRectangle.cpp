#include<iostream>
using namespace std;

int main() {
    
    int totalRows = 5;
    int colElement = 9;

    for (int row = 0; row < totalRows; row++) {    // Outer Loop - total number of rows
        for (int col = 0; col < colElement; col++) {    // Inner Loop
            cout << "*";        // print * in every rows
        } cout << endl;
    }
        
    return 0;
}
