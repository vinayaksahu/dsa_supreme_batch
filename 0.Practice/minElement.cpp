#include<iostream>
#include<vector>
using namespace std;

int main() {
    
    //min of array

    vector<int> arr{10,5,48,3,21,56,7,4};

    int min_ele = arr[0];

    for (int i = 0; i < arr.size(); i++) {
        if(min_ele > arr[i])
            min_ele = arr[i];
    }

    cout << "min element: " << min_ele << endl;
    

    return 0;
}