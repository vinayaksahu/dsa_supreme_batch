#include<iostream>
using namespace std;

int main() {
    
    int rows = 5;
    int cols = 10;

    for (int row = 0; row < rows; row+=1) { //outer loop
        for (int col = 0; col < cols; col+=1) {
            cout << "*";
        } cout << endl;
    }

    return 0;
}
