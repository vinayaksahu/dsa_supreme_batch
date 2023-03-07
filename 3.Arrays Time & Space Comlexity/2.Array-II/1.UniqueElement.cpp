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

int main() {

    vector<int> arr{1,4,7,2,5,8,3,6,9,1,4,7,2,5,8,3,6};

    int uniqueElement = findUnique(arr);        

    cout << "Unique element of the array arr is: " << uniqueElement;

    return 0;
}