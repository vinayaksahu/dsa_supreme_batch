#include<iostream>
#include<vector>
using namespace std;

bool findKey(vector<int> arr, int n, int key) {

    for (int i = 0; i < n; i++) {
        if(arr[i] == key)
            return true;
    }
    return false;
}

int main() {

    vector<int> arr = {1,4,8,5,9,6,3,2,7};

    int size = arr.size();

    int key = 0;

    int present = findKey(arr, size, key);

    if(present)
        cout << "Present.";
    else    
        cout << "Not present.";

    return 0;
}