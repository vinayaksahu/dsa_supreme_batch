#include<iostream>
using namespace std;

//Single inheritance

//Parent
class Animal {

    public:

        int age;
        string type;

        void eat() {
            cout << "Eating." << endl;
        }
}; 

//child
class Dog : public Animal {

};

int main () {

    Dog tommy;

    tommy.eat();

    return 0;
}