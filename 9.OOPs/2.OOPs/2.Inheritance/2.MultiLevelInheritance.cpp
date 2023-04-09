#include<iostream>
using namespace std;

//multi Level Inheritance
class Father {

    public:

        int worth;

        Father() {
            this->worth = 100000;
        }
};

class Child : public Father {

};

class GrantChild : public Child {


};

int main () {

    GrantChild* vinay = new GrantChild;

    cout << "Grant child worth: " << vinay->worth << endl;

    return 0;
}