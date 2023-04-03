#include<iostream>
using namespace std;

class Animal {

    public:
        int age;
        string name;

        void sleep() {
            cout << "Sleeping" << endl;
        }

        void eat() {
            cout << "Eating" << endl;
        }
};

int main () {

    //Dynamic creation
    Animal* dog = new Animal;

    (*dog).age = 12;
    (*dog).name = "Tommy";

    cout << "Age of the dog: " << (*dog).age << endl;
    cout << "Name of the dog: " << (*dog).name << endl;


    //Alternate - dynamic creation
    Animal* cat = new Animal;

    cat->age = 6;
    cat->name = "Tom";

    cout << "Age of the cat: " << (*cat).age << endl;
    cout << "Name of the cat: " << (*cat).name << endl; 

    return 0;
}