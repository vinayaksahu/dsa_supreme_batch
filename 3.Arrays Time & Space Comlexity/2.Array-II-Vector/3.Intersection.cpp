#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

void printArray(vector<int> ans) {

    for(auto val : ans) {
        cout << val << " ";
    } cout << endl;
}

void findIntersection (vector<int> arr, vector<int> brr) {

    vector<int> ans;

    //every element of arr will traverse brr
    for (int i = 0; i < arr.size(); i++) {
        int element = arr[i];
        for (int j = 0; j < brr.size(); j++) {
            if (element == brr[j]) {
                ans.push_back(brr[j]);
                brr[j] = INT_MIN; //break;
            }
        }
    }

    //print array
    printArray(ans);
}

int main() {

    vector<int> arr{1,2,3,4,5,6};
    vector<int> brr{2,4,6,8};

    findIntersection(arr, brr);

    return 0;
}
