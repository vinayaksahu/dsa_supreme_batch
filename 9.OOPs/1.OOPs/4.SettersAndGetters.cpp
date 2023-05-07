#include<iostream>
using namespace std;

class Animal {

    private:
        int age;
    
    public:

        void setAge(int age) {
            this->age = age;
        }

        int getAge() {
            return age;
        }
};

int main () {

    Animal cow;

    cow.setAge(20);
    cout << "Age of the cow is " << cow.getAge() << endl;

    return 0;
}

