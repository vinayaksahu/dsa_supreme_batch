#include<iostream>
#include<conio.h>
using namespace std;

int main() {

    clrscr();

    int n = 10;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n-1 || j == 0 || j == n-1)
                cout << "*";
            else   
                cout << " ";
        } cout << endl;
    }
    

/*     
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
     */
            
    return 0;
}
