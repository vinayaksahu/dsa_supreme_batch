#include<iostream>
#include<vector>
using namespace std;

bool findKey(vector<int> arr, int key) {
    //base case
/*     if(n == 0) //element not found -> used for array
        return false; */
    if(arr.empty())
        return false;

    if(arr[0] == key) //check if first element is the element we are searching for
        return true;

    //RR
    //findKey(arr+1, n-1, key); ->used for array
    vector<int> subarray(arr.begin() + 1, arr.end());
    return findKey(subarray, key);
}

/* bool findKey(vector<int> arr, int key) {

    for (int i = 0; i < arr.size(); i++) {
        if(arr[i] == key)
            return true;
    }
    return false;
} */

int main() {

    vector<int> arr = {1,4,8,5,9,6,3,2,7};

    int key = 7;

    int present = findKey(arr, key);

    if(present)
        cout << "Present.";
    else    
        cout << "Not present.";

    return 0;
}