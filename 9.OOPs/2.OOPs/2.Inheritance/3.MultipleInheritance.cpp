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
        int dadGiven;

        Father() {
            this->dadGiven = 100000;
        }
};

class Child : public Mother, public Father {
    public:
        int age;

        Child() {
            this->age = 25;
        }
};

int main () {

    Child* yogendra = new Child;

    cout << "Yogendra ka age: " << yogendra->age << endl
         << "Amma se mila: " << yogendra->momGiven << endl
         << "aur Papa se mila: $" << yogendra->dadGiven << endl;
    return 0;
}

