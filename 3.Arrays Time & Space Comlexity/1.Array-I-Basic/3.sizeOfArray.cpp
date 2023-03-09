#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char ch = 3;
    cout <<"size of character datatype: "<<sizeof(char) << " byte" <<endl;
    cout <<"size of character variable: "<<sizeof(ch) << " byte" <<endl;
    
    int a[] = {1,2,3,4,5};
    cout <<"size of array: "<<sizeof(a) << " byte" <<endl;
    cout <<"size of 1st array element: "<< sizeof(a[0]) << " byte" <<endl;
    //int n = sizeof(a) / sizeof(a[0]);
    int n = sizeof(a) / sizeof(int);
    cout <<"total array element: "<< n << " element" <<endl;

    return 0;
}
