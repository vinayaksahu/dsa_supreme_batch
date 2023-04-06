#include<iostream>
using namespace std;

class Animal {

    private:
        int weight;

    public:
        int age;
        string type;

        //Default constructor
        Animal() {
            this->weight = 0;
            this->age = 0;
            this->type = "";
            cout << "Default Contructor called." << endl;
        }

        //Parameterised constructor
        Animal(string type) { // 1 parameter passed
            this->type = type;
            cout << "Parameterised Contructor with 1 parameter." << endl;
            cout << "type of the animal: " << type << endl << endl;
        }
        Animal(int weight, int age, string type) { // 3 papameter passed
            this->weight = weight;
            this->age = age;
            this->type = type;
            cout << "Parameterised Contructor with 3 parameter." << endl;
            cout << "weight of the animal: " << weight << endl;
            cout << "age of the animal: " << weight << endl;
            cout << "type of the animal: " << type << endl << endl;
        }

        //Copy constructor -> camle = elephant
        Animal(Animal &elephant) { // 1 parameter passed
            this->weight = elephant.weight;
            this->age = elephant.age;
            this->type = elephant.type;
            cout << "Copy Contructor." << endl;
            cout << "weight of the animal: " << weight << endl;
            cout << "age of the animal: " << weight << endl;
            cout << "type of the animal: " << type << endl << endl;
        }
};

int main() {

    Animal dog; //Default contructor
    Animal cat("cat"); //Parameterised contructor 1 parameter

    //Animal elephant(5000, 50, "Asian"); //Parameterised contructor 3 parameter <- static
    Animal* elephant = new Animal(5000, 50, "Asian"); //Parameterised contructor 3 parameter <- Dynamic

    Animal camle(*elephant); //copy constructor 
    //Animal camle = elephant; //copy constructor -> another way to declare copy contructor

    return 0;
}