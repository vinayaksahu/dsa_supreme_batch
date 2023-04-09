#include<iostream>
using namespace std;

//Multiple Inheritane <= Ambiguity problem

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
            this->paisa = 2000;
        }
};

//Inherited properties from Mother and Father
class Child : public Mother, public Father {

    public:
        int age;

        Child() {
            this->age = 21;
        }
};

int main() {

    Child* bhola = new Child;

    cout << "Bhola ka age: " << bhola->age << endl
         << "Amma ne paisa diya: $" << bhola->Mother::paisa << endl
         << "aur Papa ne paisa diya: $" << bhola->Father::paisa << endl;

    return 0;
}