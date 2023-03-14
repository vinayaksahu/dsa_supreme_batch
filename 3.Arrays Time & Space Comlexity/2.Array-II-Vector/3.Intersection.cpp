#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

void printArray(vector<int> ans) {

    for(auto val : ans) {
        cout << val << " ";
    }
}

void findIntersection(vector<int> arr, vector<int> brr) {

    vector<int> ans;

    for (int i = 0; i < arr.size(); i++) {
        int element = arr[i];
        for(int j = 0; j < brr.size(); j++) {
            if (element == brr[j]) {
                ans.push_back(brr[j]);
                break;
                //brr[j] = INT_MIN;
            }
        }
    }
    

    //print 
    printArray(ans);
}

int main() {

    vector<int> arr{1,3,5,7,9};
    vector<int> brr{2,4,6,8,1};

    //Intersection (common elements) of arrays
    findIntersection(arr, brr);

    return 0;
}