#include<iostream>
using namespace std;

class Animal {

        //state - properties <= data member
        int age; // 4 byte
        string name; // 4 byte

};

int main () {

    //cout << "Size of empty class: " << sizeof(Animal);
    cout << "Size of Animal class: " << sizeof(Animal); // 28 byte <= How??
                                                        //that's why here comes
                                                        //Padding & Greedy Alignment concept   
    return 0;
}