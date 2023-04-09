#include<iostream>
using namespace std;

class Sahu {

    public:

        int salary;

        void operator + (Sahu& yogesh) {
            int value1 = this-> salary;
            int value2 = yogesh.salary;
            cout <<(value2 / value1) << endl;
        }

};

int main() {

    Sahu vinayak, yogesh;

    vinayak.salary = 100000;
    yogesh.salary = 200000;

    //this should print differet between them
    vinayak + yogesh;
    vinayak.operator+(yogesh); //alternate option

    return 0;
}