#include<iostream>
using namespace std;

class Animal {

    //Access modifier
    public:

        //State - Properties <= Data member
        int age;
        string name;
        
        //Behaviour <= Meber function
        void eat() {
            cout << "Eating" << endl;
        }

        void sleep() {
            cout << "Sleeping" << endl;
        }
};

int main() {

    //creating object
    Animal dog;
    //calling data member
    dog.age = 10;
    dog.name = "Tommy"; 
    cout << "Age of the dog: " << dog.age << endl;
    cout << "Name of the dog: " << dog.name << endl;
    //calling member function
    dog.eat();
    dog.sleep();

    cout << endl;

    //ceating another object
    Animal cat;
    //calling data member 
    cat.age = 5;
    cat.name = "Tom";
    cout << "Age of the cat: " << cat.age << endl;
    cout << "Name of the cat: " << cat.name << endl;
    //calling member function
    cat.eat();
    cat.sleep();

    return 0;
}

