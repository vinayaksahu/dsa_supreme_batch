#include<iostream>
using namespace std;

class Animal {
public:
  void eat() {
    cout << "I can eat!" << endl;
  }
};

class Mammal : public Animal {
public:
  void run() {
    cout << "I can run!" << endl;
  }
};

class Bird : public Animal {
public:
  void fly() {
    cout << "I can fly!" << endl;
  }
};

class Bat : public Mammal, public Bird {
public:
  void sleep() {
    cout << "I can sleep during the day!" << endl;
  }
};

int main() {
  Bat bat;
  bat.Mammal::eat();  // inherited from Mammal
  bat.Bird::eat();  // inherited from Bird
  bat.Mammal::run();  // inherited from Mammal
  bat.Bird::fly();  // inherited from Bird
  bat.sleep(); // inherited from Bat
  return 0;
}
