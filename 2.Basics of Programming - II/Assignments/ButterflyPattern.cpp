/* #include<iostream>
using namespace std;

int main() {

    int n = 10;

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
} */

#include<iostream>
using namespace std;

int main() {
    int n = 4;
    char ch = 'A';
    for (int i = 0; i < 2*n; i++) {
        int cond = (i < n) ? i : (n - (i % n) - 1);
        int space = (i < n) ? 2*(n - cond - 1) : (i - cond - 1);

        for (int j = 0; j < 2*n; j++) {
            if (j == cond || j == (2 * n - cond - 1))
                cout << ch;
            else if (space-- > 0)
                cout << ch;
            else
                cout << ch;
            ch++;
        }
        cout << endl;
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