#include<iostream>
using namespace std;

class Empty {

};

int main () {

    Empty object;

    cout << "Size of empty class: " << sizeof(Empty);

    return 0;
}