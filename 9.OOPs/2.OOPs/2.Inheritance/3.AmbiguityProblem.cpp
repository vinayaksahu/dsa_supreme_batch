#include<iostream>
using namespace std;

class Mother {

    public:
        int paisa;

        Mother() {

            this->paisa = 1000;
        }
};

class Father {

    public:
        int paisa;

        Father() {

            this->paisa = 1000;
        }
};

class Child:public Mother, public Father{};

int main() {

    Child yogendra;

    cout << "yogendra has some paisa from Amma given: " 
         << yogendra.Mother::paisa << endl << "and Papa given paisa: " 
         << yogendra.Father::paisa; 

    return 0;
}