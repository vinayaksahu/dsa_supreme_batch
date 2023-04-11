#include<iostream>
using namespace std;

class Animal {

    public:
        virtual void speak() {
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

    Animal* a1 = new Animal;
    a1->speak(); // o/p: Speaking

    Dog* d1 = new Dog;
    d1->speak(); // o/p: Barking

    //upCasting 
    Animal* a2 = new Dog; // o/p: Speaking 
    a2->speak(); // o/p: Barking <= using virtual keyword in parent class

    //downCasting -> agr child type ka pointer and parent type ka object bnate hain to object ko explicitly type caste krna pdta hai
    Dog* d2 = (Dog*)new Animal; // o/p: Barking 
    d2->speak(); // o/p: Speaking <= using virtual keyword in parent class 

    return 0;
}