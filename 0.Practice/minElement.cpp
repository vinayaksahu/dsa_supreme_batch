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


    //selection sort
    
    for (int i = 0; i < arr.size()-1; i++) {
        int min_idx = i;
        for (int j = i+1; j < arr.size(); j++) {
            if (arr[j] < arr[min_idx])
                swap (arr[j], arr[min_idx]);
        }
    }


    cout << "Sorted array: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    

    return 0;
}