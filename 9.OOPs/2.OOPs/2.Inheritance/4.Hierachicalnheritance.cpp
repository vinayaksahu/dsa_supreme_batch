#include<iostream>
using namespace std;

class Car {

    public:
        int price;

        Car() {
            this->price = 2700000;
        }
};

class BMW : public Car {};

class Audi : public Car {};

int main () {

    BMW* B11 = new BMW;

    cout << "Price of BMW: " << B11->price << endl;

    Audi* A11 = new Audi;
    cout << "Price of Audi: " << A11->price << endl;

    return 0;
}