#include<iostream>
using namespace std;

int main() {

    int n = 3;

    for (int i = 0; i < 2*n; i++) {

        //int cond = (i < n) ? i : (n + (n - i) - 1);
        int cond = (i < n) ? i : (n - (i % n) - 1);

        int space = (i < n) ? 2*(n - cond - 1) : (i - cond - 1);
        //int space = (i < n) ? 2*(n - i - 1) : 2*(i - n);

        for (int j = 0; j < 2*n; j++) {

            if (j <= cond)
                cout << "* ";

            else if (space-- > 0)
                cout << "  ";
                
            else    
                cout << "* ";

        } cout << endl;
    }

    return 0;
}

/*

*    *
**  **
******
******
**  **
*    *

*/