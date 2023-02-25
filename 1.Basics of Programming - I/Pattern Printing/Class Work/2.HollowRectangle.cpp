#include<iostream>
using namespace std;

int main() {
    
    int rowCount = 5;
    int colCount = 10;

    for (int row = 0; row < rowCount; row++) { // count rows
        if (row == 0 || row == rowCount-1) { // for 1st and last rows
            for (int col = 0; col < colCount; col++) {
                cout << "*";
            }
        }
        else { // for 2nd row to 2nd last rows
            cout << "*"; //for 1st column
            for (int col = 1; col < colCount-1; col++) { //for 2nd column to 2nd last column print spaces
                cout << " "; //print spaces
            }
            
            cout << "*"; // for last column
        }
            cout << endl; // new line
        
    }
    
            
    return 0;
}
