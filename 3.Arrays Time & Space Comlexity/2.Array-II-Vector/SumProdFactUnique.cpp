#include<iostream>
#include<vector>
using namespace std;

int findUnique(vector<int> arr) {

    int ans = 0;
    for (int i = 0; i < arr.size(); i++) {
        ans = ans ^ arr[i];
    }

    return ans;
}

int findSum (vector<int> arr) {

    int sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum = sum + arr[i];
    }

    return sum;    
}

int findProduct(vector<int> arr) {

    int product = 1;

    for (int i = 0; i < arr.size(); i++) {
        product = product * arr[i];
    }
    
    return product;
}

int findFact(int n) {

    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;
}

int main () {

    vector <int> arr {1, 2, 4, 2, 1, 3, 6, 5, 5, 6, 4};

    //xor operation practice
    cout << (1 * 2 * 4 * 2 * 1 * 3 * 6 * 5 * 5 * 6 * 4) << endl << endl;

    //Find sum
    int sum = findSum(arr);
    cout << "Sumation of all elements are: "<< sum << endl;

    //Find Product
    int product = findProduct(arr);
    cout << "Product of all elements are: "<< product << endl;

    //Find factorial
    int fact = findFact(5);
    cout << "Find factorial of 5: "<< fact << endl;


    //Find unique element
    int uniqueElement = findUnique(arr);
    cout << "Unique element: "<< uniqueElement << endl;

    return 0;
}