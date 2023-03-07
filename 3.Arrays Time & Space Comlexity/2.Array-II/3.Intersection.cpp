#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

void printArray(vector<int> ans) {

    for(auto value : ans) {
        cout << value << " ";
    } cout << endl;
}

void findIntersection(vector<int> arr, vector<int> brr) {

    vector<int> ans;

    //for every elements of arr
    for (int i = 0; i < arr.size(); i++) {
        int element = arr[i];
        //we'll traverse entire array of brr
        for (int j = 0; j < brr.size(); j++) {
            if (element == brr[j]) {
                ans.push_back(arr[i]);
                break;           
                //or we can mark
                //brr[j] = INT_MIN;
            }
        }
    }

    //printArray
    printArray(ans);
}

int main() {

    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> brr{2, 4, 6, 8, 9, 9};

    findIntersection(arr, brr);

    return 0;
}