#include<iostream>
using namespace std;

//Multi-Level Inheritance

class Father {
    public:
        int worth;

        Father() {
            this->worth = 1000;
        }
};

class Child:public Father {

};

class Grantchild:public Child {

};

int main() {

    Grantchild vinayak;
    cout << "Grantchild worth: " << vinayak.worth;

    return 0;
}