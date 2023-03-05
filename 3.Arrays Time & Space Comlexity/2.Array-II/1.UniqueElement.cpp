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

int main () {

    vector <int> arr {1, 2, 4, 2, 1, 3, 6, 5, 5, 6, 4};

    //xor operation practice
    cout << (7 ^ 4) << endl << endl;

    //Find unique element

    int uniqueElement = findUnique(arr);
    cout << "Unique element: "<< uniqueElement << endl;

    return 0;
}