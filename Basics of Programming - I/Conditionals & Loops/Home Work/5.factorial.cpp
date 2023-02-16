#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    //cin >> n;
/* 
    int fact = 1; // let factorial of given number is n.

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i; // 1*2*3*4*5
    }
 */

    int fact = n;

    for (int i = n-1; i >= 1; i--)
    {
        fact = fact * i;  // 5*4*3*2*1
    }
     


    //print fact
    cout << "factorial of given number is : " << fact;    

    return 0;
}