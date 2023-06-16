#include <iostream>
using namespace std;

int main() {
    int n = 8;

    for (int i = 0; i < n * n; i++) {
        int row = i / n;
        int col = i % n;

        if (col >= row && col < n - row) {
            cout << "* ";
        } else {
            cout << "  ";
        }

        if (col == n - 1) {
            cout << endl;
        }
    }

    return 0;
}

/*

* * * * * * * * *    
*             * *   
*           * * *   
*         * * * *   
*       * * * * *   
*     * * * * * *   
*   * * * * * * *   
* * * * * * * * * 

*/