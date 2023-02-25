#include <iostream>
using namespace std;

int main()
{ // approch - if n is not prime then it can be devide by i = 2,3,4
    int n = 5;
    bool flag = true;

    if (n == 0 || n == 1)
        flag = false;
    
    for (int i = 2; i < n; i++) {
        if (n % i == 0) { // if n is not prime then it can be devide from i = 2,3,4
            cout << "Not Prime";
            flag = true;
            break;
        }
    }

    if (flag)
        cout << "Prime";
    else
        cout << "Not Prime";

    
    

    //cin >> n; // n is factorail or not
/* 
    for (int i = 2; i < n; i++) // is 5 divide by 2, 3, 4 or not
    {
        if (n % i == 0) // if dividing by 2, 3, 4 ans is 0
        {
            cout << "Not prime";    // then it is not prime
            flag = 1; // return flag 1 (true) as a not prime
            break;  // break the loop
        }
    }
       
    if (flag == 0)  // if flag remains 0 (false) means 5 is not divided by 2, 3, 4
    {
        cout << "Prime";    //it is prime
    } */

    return 0;
}