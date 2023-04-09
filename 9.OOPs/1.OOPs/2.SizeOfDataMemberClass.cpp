#include<iostream>
using namespace std;

class Animal {

        //state - properties <= data member
        int age; // 4 byte
        char name; // 1 byte

};

int main () {

    //cout << "Size of Animal class: " << sizeof(Animal);
    cout << "Size of Animal class: " << sizeof(Animal); // 8 byte <= How??
                                                        //that's why here comes
                                                        //Padding & Greedy Alignment concept   
    return 0;
}