#include<iostream>
using namespace std;

int main() {
    
    int rows = 5;
    int cols = 10;

    for (int row = 0; row < rows; row+=1) {
        for (int col = 0; col < cols; col++) {
            if (row == 0 || row == rows-1 || col == 0 || col == cols-1)
                cout << "*";
            else
                cout << " ";
        } cout << endl;
        
    }
    
    return 0;
}
