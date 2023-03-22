#include<iostream>
using namespace std;

int main() {

/*     int n = 5;

    for (int i = 0; i < n; i++) {
        // spaces
        for (int j = 0; j < n-i-1; j++) {
            cout << " ";
        }

        // last line
        if (i == n-1) {
            for (int j = 0; j < n; j++) {
                cout << "* ";
            }
        }
        
        
        //stars
        else {
            for (int j = 0; j < 2*i+1; j++) {
                if (j == 0 || j == 2*i)
                    cout << "*";
                else   
                    cout << " ";
            
            }   
        }
        cout << endl;
    } */

/*

    *
   * *
  *   *
 *     *
* * * * *
*/ 

/*     for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i; j++) {
            cout << " ";
        }
        for (int j = 0; j < 2*i+1; j++) {
            if (i == n-1 || j == 0 || j == 2*i)
                cout << "*";
            else
                cout << " ";
        } cout << endl;
    } */
    

/*

    *
   * *
  *   *
 *     *
*********
*/ 
/* 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i+1; j++) {
            if (i == n-1 || j == 0 || j == i)
                cout << "*";
            else   
                cout << " ";
        } cout << endl;
    } */
    

/*

*
**
* *
*  *
*****
*/

/*   int year = 1996;
  // leap year if perfectly divisible by 400
  if (year % 400 == 0) {
    cout << year << " is a leap year.";
  }
  // not a leap year if divisible by 100
  // but not divisible by 400
  else if (year % 100 == 0) {
    cout << year << " is not a leap year.";
  }
  // leap year if not divisible by 100
  // but divisible by 4
  else if (year % 4 == 0) {
    cout << year << " is a leap year.";
  }
  // all other years are not leap years
  else {
    cout << year << " is not a leap year.";
  } */

/*     for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << i+j+1;
        } cout << endl;
    }  */
/*
123
234
345
*/
    int rows = 5;
     for (int i = 1; i <= rows; i++) {
        for (int j = i; j <= i+2; j++) {
            cout << j;
        } cout << endl;
    }  
/*
123
234
345
*/


/*     int p = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << p;
            p++;
        } cout << endl;
    }  */ 
/*
123
456
789
*/


/*     for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << j+1;
        } cout << endl;
    } */
/*
123
123
123
*/


/*     for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << i+1;
        } cout << endl;
    } */
/*
111
222
333
*/
    
    return 0;
}

/*


*/