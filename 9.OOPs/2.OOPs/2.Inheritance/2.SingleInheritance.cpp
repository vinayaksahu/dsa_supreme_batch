#include<iostream>
using namespace std;

//Single Inheritance

class Animal {

    public:

        void sleep() {
            cout << "sleeping";
        }
};

class Dog:public Animal {

};

int main() {

    Dog tommy;
    tommy.sleep();

    return 0;
}