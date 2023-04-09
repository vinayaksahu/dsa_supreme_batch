#include<iostream>
using namespace std;

//class apne aap me ek encapsulation hai jo ki "data member" and "member function" ko wrap krk rkhta hai
class Animal {
    public:
        //data member
        int age;
        int weight;

        //member funtion
        void eat(Animal& dog) {
            int dogAge = dog.age;
            int catAge = this->age;
            int catWeight = dog.weight;
            cout << "Dog age: " << dogAge << endl
                 << "Cat age: " << catAge << endl
                 << "Cat weight: " << catWeight << endl;
        }
};

int main() {

    Animal cat, dog;
    cat.age = 4;
    dog.age = 5;
    dog.weight = 15;
    cat.eat(dog);

    return 0;
}