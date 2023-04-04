#include<iostream>
using namespace std;

class Employee {

    private:
        int salary;

    public:
        void setSalary(int s) {
            salary = s;
        }

        int getSalary() {
            return salary;
        }
        

};

int main() {

    Employee vinayak;

    vinayak.setSalary(100000);
    cout << "Salary of the employee: " << vinayak.getSalary() << endl;

    return 0;
}