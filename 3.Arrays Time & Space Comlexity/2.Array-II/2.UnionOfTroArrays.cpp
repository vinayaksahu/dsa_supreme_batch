#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int> ans) {

    for(auto val : ans) {
        cout << val << " ";
    } cout << endl;
}

void findUnion(vector<int> arr, vector<int> brr) {

    vector<int> ans;

    //insert elements of arr to ans
    for (int i = 0; i < arr.size(); i++) {
        ans.push_back(arr[i]);
    }
    //again insert brr elements to ans
    for (int i = 0; i < brr.size(); i++) {
        ans.push_back(brr[i]);
    }
    
    //print array
    printArray(ans);
}

int main() {

    vector<int> arr{1,3,5,7};
    vector<int> brr{2,4,6,8};

    findUnion(arr, brr);

    return 0;
}