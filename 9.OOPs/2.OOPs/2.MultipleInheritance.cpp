#include<iostream>
using namespace std;

class Mother {

    public:
        string momGiven;

        Mother() {
            this->momGiven = "Sanskar";
        }
};

class Father {

    public:
        string dadGiven;

        Father() {
            this->dadGiven = "Future";
        }
};

class Child:public Mother, public Father{};

int main() {

    Child yogesh;

    cout << "Yogesh has Amma & Papa given properties are: " << yogesh.momGiven << " and " << yogesh.dadGiven;

    return 0;
}