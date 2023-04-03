#include<iostream>
using namespace std;

class Animal {

    //access modifier
    public:
        //state - properties <= data member
        int age;
        string name;

        //behaviour <= member function
        void eat() {
            cout << "This type of animal eats nonveg." << endl;
        }
        void sleep() {
            cout << "Sleeping." << endl;
        }

};

int main () {

    //object creation
    Animal dog;
    dog.age = 12;
    dog.name = "Tommy";
    cout << "Age of the dog: " << dog.age << endl;
    cout << "Name of the dog: " << dog.name << endl;
    dog.eat();
    dog.sleep();

    cout << endl;

    Animal cat;
    cat.age = 6;
    cat.name = "Tom";
    cout << "Age of the cat: " << cat.age << endl;
    cout << "Name of the cat: " << cat.name << endl;
    cat.eat();
    cat.sleep();

    return 0;
}