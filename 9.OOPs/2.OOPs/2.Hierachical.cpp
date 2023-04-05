#include<iostream>
using namespace std;

class Car {
    public:
        int price;
        int mileage;

        Car() {
            this->price = 10000;
            this->mileage = 15;
        }

};

class Scorpio: public Car {};

class BMW: public Car {};

int main () {

    Scorpio S11;
    BMW B11;

    cout << "Price of the S11 Scorpio car: " << S11.price << endl << endl;
    cout << "Price of the B11 BMW car: " << B11.mileage << endl;

    return 0;
}