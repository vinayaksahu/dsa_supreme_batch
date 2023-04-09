#include<iostream>
using namespace std;

class Maths {

    public:
        
        int sum(int a, int b) {
            return a + b;
        }

        int sum(int a, int b, float c) {
            return a + b + c;
        }

};

int main() {
    
    Maths Q1, Q2;

    cout << Q1.sum(5, 7) << endl;
    cout << Q2.sum(5, 7, 1.2);

    return 0;
}