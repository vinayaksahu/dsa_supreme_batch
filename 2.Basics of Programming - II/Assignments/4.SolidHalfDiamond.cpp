#include<iostream>
using namespace std;

int main() {

    int n = 5;

    for (int i = 0; i < 2*n-1; i++) {
        int cond = 0;
        if (i < n)
            cond = i;
        else
            cond = n - (i % n) - 2;  // 5-(0%5)-2 = 5-0-2=3+1=4
        for (int j = 0; j < cond+1; j++) {
            cout << "*";
        } cout << endl;
    }
    

/*     for (int i = 0; i < 2*n-1; i++) { */
/*      int cond = 0;
        if (i < n)
            cond = i;
        else
            cond = n - (i % n) - 2; */   // 5-(0%5)-2=5-0-2=3+1=4
/*         int cond = (i < n) ? i : n - (i % n) - 2;  
        for (int j = 0; j < cond+1; j++) {
            cout << "* ";
        }
        cout << endl;
    }*/

    return 0;
} 


/*

* 
* * 
* * * 
* * * * 
* * * * * 
* * * * 
* * * 
* * 
* 

*/