#include<iostream>
using namespace std;

class Employee {
    public:
        int age;
        int salary;
        string city;
};

int main () {

    //static
    Employee vinayak;
    vinayak.age = 28;
    vinayak.salary = 100000;
    vinayak.city = "Bilaspur";
    cout << "Age of Vinayak: " << vinayak.age << endl;
    cout << "Salary of Vinayak: " << vinayak.salary << endl;
    cout << "City of Vinayak: " << vinayak.city << endl << endl;
    
    //dynamic
    Employee* yogesh = new Employee;
    (*yogesh).age = 26;
    (*yogesh).salary = 200000;
    yogesh->city = "Raipur";
    cout << "Age of Yogesh: " << yogesh->age << endl;
    cout << "Salary of Yogesh: " << yogesh->salary << endl;
    cout << "City of Yogesh: " << (*yogesh).city << endl;

    return 0;
}