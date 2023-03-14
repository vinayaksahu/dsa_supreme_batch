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

    vector<int> arr{1,2,3,4,5,6,7,8,9,1,2,3,4,6,7,8,9};

    int uniqueElement = findUnique(arr);

    cout << "Unique element: " << uniqueElement;

    return 0;
}