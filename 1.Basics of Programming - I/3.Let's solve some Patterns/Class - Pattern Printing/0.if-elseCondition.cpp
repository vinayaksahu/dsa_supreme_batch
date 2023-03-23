#include<iostream>
using namespace std;

int main() {

/*     int broNum = 4;

    if (broNum == 4) 
        cout << "bat bn jayegi";
    else
        cout << "bat nhi bnegi"; */
/*     int a = 2, b = 2, c = 2;
    if(2*c==(a+b) && 2*b < (a+c) && 2*c > (a+b))
        cout << "true";
    else
        cout << "false"; */
    
    int a = 2, b = 2, c = 2;
    if(2*c==(a+b))
        cout << "true" << endl;
    else if(2*b < (a+c))
        cout << "true" << endl;
    else if(2*c > (a+b))
        cout << "true" << endl;
    else
        cout << "false";

    return 0; 
}
    
