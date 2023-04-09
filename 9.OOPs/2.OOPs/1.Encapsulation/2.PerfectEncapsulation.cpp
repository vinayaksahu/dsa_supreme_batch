#include<iostream>
using namespace std;

class Animal {

    //In Perfect Encapsulation all data members are private

    private:
        int age;
        int weight;

    public:
        void getAge() {
            cout << "accesing age data member";
        }

};

int main() {

    Animal dog;

    dog.getAge();

    return 0;
}