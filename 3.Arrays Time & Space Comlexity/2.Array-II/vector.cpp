#include<iostream>
#include<vector>
using namespace std;

int main() {
    //declare
    vector <int> arr1;

    //initialization
    vector<int> arr2{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; //less practice 
    for (int i = 0; i < 10; i++) { //print above arr2
        cout << arr2[i] << " ";
    }

    //input -> in arr2
    arr2.push_back(11);
    arr2.push_back(12);

    //output -> of arr2
    for (int i = 0; i < arr2.size(); i++) {
        cout << arr2[i] <<" ";
    }
    
    //input from user
    int userInput;
    int size;
    cin >> size;
    vector <int> arr3; //initialization
    for (int i = 0; i < size; i++) {
        cin >> userInput;
        arr3.push_back(userInput);
    }
    
    // print above arr3
    for (int i = 0; i < size; i++) {
        cout << arr3[i] <<" ";
    }
    
    //deletion - last 3 element will be deleted
    arr3.pop_back();  
    arr3.pop_back(); 
    arr3.pop_back();   

    //another way of printing
    for (auto &i : arr3) {
        cout << i<<"";
    }

    //Empty or not
    arr1.empty();

    //size -> no. of element
    arr2.size();

    //capacity -> how many element can be store
    arr2.capacity();

    return 0;
}
