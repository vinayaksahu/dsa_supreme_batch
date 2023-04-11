#include<iostream>
using namespace std;

class Animal {

    public:

        Animal() {
            cout << "I m inside Animal (Parent) constructor." << endl;
        }
};

class Dog : public Animal {

    public:

        Dog() {
            cout << "I m inside Dog (Child) constructor" << endl;
        }
};

int main () {

    Animal* a1 = new Animal; 

    Dog* d1 = new Dog();

    Animal* a2 = new Dog();

    Dog* d2 = (Dog* )new Animal();

    return 0;
}