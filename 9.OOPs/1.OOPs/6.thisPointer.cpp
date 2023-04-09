#include<iostream>
using namespace std;

class Employee {

    private:
        int salary;

    public:
        void setSalary(int salary) {
            //(*this).salary = salary; //this is a pointer to current object
            this->salary = salary; //alternate
        }
        int getSalary() {
            return salary;
        }
};

int main () {
    //Static
    Employee vinayak;
    vinayak.setSalary(100000);
    cout << vinayak.getSalary() << endl;

    //Dynamic
    Employee* yogesh = new Employee;
    yogesh->setSalary(200000);
    cout << yogesh->getSalary() << endl;

    return 0;
}