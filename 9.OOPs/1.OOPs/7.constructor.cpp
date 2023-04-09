#include<iostream>
using namespace std;

class Animal {

    private:
        int weigth;
    
    public:
        int age;
        string type;

        //default constructor
        Animal() {
            cout << "Default constructor called." << endl << endl;
        }

        //paramterized constructor
        Animal(int age) { // 1 parameter
            this->age = age;
            cout << "Age of animal: " << this->age << endl;
            cout << "Parameterized constructor called with 1 parameter." << endl << endl;
        }
 
        Animal(int age, int weight, string type) { //3 parameter
            this->age = age;
            this->weigth = weigth;
            this->type = type;
            cout << "Age: " << this->age << endl;
            cout << "Weight: " << this->weigth << endl;
            cout << "Type: " << this->type << endl;
            cout << "Parameterized constructor called with 3 parameter." << endl << endl;
        }

        //copy constructor
        Animal(Animal &dog) {
            this->age = dog.age;
            this->type = dog.type;
            cout << this->type << endl;
            cout << "Copy constructor called." << endl;
        }
};

int main() {

    Animal cow; //default constructor

    Animal cat(5); //paramterized constructor - 1 parameter
    Animal dog(10, 20, "puppy"); //paramterized constructor - 3 parameter <= static
    Animal* doggy = new Animal(11,19, "pupp");

    Animal bulldog(dog); //copy constructor <= static
    Animal* liondog = new Animal(dog); //copy contructor <= dynamic

    return 0;
}




/* 
#include<iostream>
using namespace std;

class Animal {

     private:
        int weight;

    public:
        int weight;
        int age;
        string type;

        //Default constructor
        Animal() {
            this->weight = 0;
            this->age = 0;
            this->type = "";
            cout << "Default Contructor called." << endl << endl;
        }

        //Parameterised constructor
        Animal(string type) { // 1 parameter passed
            this->type = type;
            cout << "Parameterised Contructor with 1 parameter." << endl;
            cout << "type of the animal: " << this->type << endl << endl;
        }
        Animal(int weight, int age, string type) { // 3 papameter passed
            this->weight = weight;
            this->age = age;
            this->type = type;
            cout << "Parameterised Contructor with 3 parameter." << endl;
            cout << "weight of the animal: " << this->weight << endl;
            cout << "age of the animal: " << this->age << endl;
            cout << "type of the animal: " << this->type << endl << endl;
        }

        //Copy constructor -> camle = elephant
        Animal(Animal &elephant) { // 1 parameter passed
            this->weight = elephant.weight;
            this->age = elephant.age;
            this->type = elephant.type;
            cout << "Copy Contructor." << endl;
            cout << "weight of the animal: " << weight << endl;
            cout << "age of the animal: " << age << endl;
            cout << "type of the animal: " << type << endl << endl;
        }
};

int main() {

    Animal dog; //Default contructor

    Animal cat("cat"); //Parameterised contructor 1 parameter
    Animal cow(500, 20, "cow"); //Parameterised contructor 3 parameter <- static
    Animal* elephant = new Animal(10000, 50, "elephant"); //Parameterised contructor 3 parameter <- Dynamic

    Animal bigElephant(*elephant); //copy constructor 
    //Animal camle = elephant; //copy constructor -> another way to declare copy contructor

    return 0;
} */