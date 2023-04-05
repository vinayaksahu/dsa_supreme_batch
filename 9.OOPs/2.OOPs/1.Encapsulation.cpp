#include<iostream>
using namespace std;

//Class apne aap me ek Encapsulation hai jo ki "Data Member" and "Member Function" wrap krke rkhta hai

class Animal {

    public:
        //Data Member
        int age;
        int weight;

        //Member Function
        void eat() {
            cout << "Eating";
        }


};

int main () {

    Animal cat;

    cat.eat();

    return 0;
}