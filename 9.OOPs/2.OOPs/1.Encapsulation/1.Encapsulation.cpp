#include<iostream>
using namespace std;

//class apne aap me ek encapsulation hai jo ki "data member" and "member function" ko wrap krk rkhta hai
class Animal {
    public:
        //data member
        int age;
        int weight;

        //member funtion
        void eat() {
            cout << "Eating.";
        }
};

int main() {

    Animal cat;

    cat.eat();

    return 0;
}