#include <iostream>
#include <cstring>
using namespace std;

int main() {
    
    int a[5] = {1,2,3,4,5};

    // sare array ko 1 kr do

/*     for (int i = 0; i < 5; i++) {
        a[i] = 1; 
    } */
  
    // all elements of A are zero
    memset(a, 0, sizeof(a));
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    cout << endl;
  
    // all elements of A are -1
    memset(a, -1, sizeof(a));
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    cout << endl;
  
    // Would not work
    memset(a, 1, sizeof(a)); // WRONG
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    
      

    return 0;
}
