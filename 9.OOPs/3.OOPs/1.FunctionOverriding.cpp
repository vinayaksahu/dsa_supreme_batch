#include<iostream>
using namespace std;

class Animal {

    public:
        void speak() {
            cout << "Speaking" << endl;
        }
};

class Dog : public Animal {

    public:
        //override
        void speak() {
            cout << "Barking" << endl;
        }
};

int main () {

    //Parent
    Animal* a1 = new Animal;
    a1->speak(); // o/p: Speaking

    //Child
    Dog* d1 = new Dog;
    d1->speak(); // o/p: Barking


    return 0;
}