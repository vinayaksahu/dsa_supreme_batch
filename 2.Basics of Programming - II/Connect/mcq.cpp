#include <iostream>
using namespace std;

int fun(int = 0, int = 0);

int main() {
    
/*     if (0)
    {
        cout << "Hello";
    }
    else
    {
        cout << "Good Bye";
    } */
    
/*     int n;

    for (n = 5; n > 0; n--)
    {
        cout << n;
        if (n == 3)
        {
            break;
        }
        
    } *///543
/*     
    int n = 15;

    for (;;)
    {
        cout << n;
    } */

/*     int a = 2;
    int b = 77;

    if(a && b)
        cout << "true";
    else    
        cout << "false";   */    

/*     int a = 5, b = 6, c,d;

    c = a,b;
    d = (a,b);

    cout << c << " " << d; */

    //cout << fun(5);

/*     int a = 5, b = -7, c = 0, d;
    d = ++a && ++b || ++c;
    cout << a << b << c << d; */
/*     int y = 0;
    if(1 | (y=1))
        cout << "Yes" <<y;
    else    
        cout << "No";
 */

/*     int a = 10, b = 5, c = 5;

    int d;

    d = b+c == a;

    cout << d; */

/*     int a = 10, b = 5, c = 3;

    b != !a;
    c = !!a;

    cout << b <<c; */

    /* float x = 0.1;
    printf ("%d, ", x);
    printf ("%f, ", x); */

/*     int a = -45;
    a = ~a;
    cout << a; */

    //int a;
/*     int code = 8;
    switch (code)
    {
    case 8:
        cout << "a";
        break;
    case 1&&2:
        cout << "b";
        break;   
    default:
        cout << "c";
        //break; 
    } */

    int i;
    for (i = 0; i < 10; i++)
    {
        cout << i;
    }
    

    return 0;
}

int fun (int x, int y) {

    return (x+y);
}
