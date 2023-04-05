#include<iostream>
using namespace std;

class Mother {

    public:
        string momGiven;
        int paisa;

        Mother() {
            this->momGiven = "Sanskar";
            this->paisa = 1000;
        }
};

class Father {

    public:
        string dadGiven;
        int paisa;
        Father() {
            this->dadGiven = "Future";
            this->paisa = 1000;
        }
};

class Child:public Mother, public Father{};

int main() {

    Child yogesh;

    cout << "Yogesh has Amma & Papa's properties are: " 
         << yogesh.momGiven << " and " 
         << yogesh.dadGiven << endl << endl;

    cout << "Yogesh has some paisa from Amma given: " 
         << yogesh.Mother::paisa << endl << "and Papa given paisa: " 
         << yogesh.Father::paisa; 

    return 0;
}