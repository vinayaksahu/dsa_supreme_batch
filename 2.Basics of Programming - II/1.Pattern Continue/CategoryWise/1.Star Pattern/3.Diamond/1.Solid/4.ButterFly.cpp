#include<iostream>
using namespace std;

int main() {

    int n = 5;

    for (int i = 0; i < 2*n; i++) {

        //int cond = (i < n) ? (i + 1) : (n - (i % n));
        int cond = (i < n) ? (i + 1) : (2*n - i);

        //int space_count = (i < n) ? (2*(n - cond)) : (i - cond); 
        int space_count = (i < n) ? (2*(n - i - 1)) : (2*(i - n)); 

        for (int j = 0; j < 2*n; j++) {

            if (j < cond)
                cout << "*";
                
            else if (space_count-- > 0) //every iteration me space print hone k
                cout << " ";            // liye ek ek space km hote jayegi
                
            else
                cout << "*";

        } cout << endl;
    }

    return 0;
}