#include<iostream>
using namespace std;

class Box {

    public:

        ~Box() {
            cout << "Inside destructor" << endl;
        }
};

int main() {

    Box b1;

    Box *b2 = new Box;
    delete b2;

    return 0;
}