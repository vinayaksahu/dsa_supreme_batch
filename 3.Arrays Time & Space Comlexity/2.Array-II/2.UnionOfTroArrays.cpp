#include<iostream>
#include<vector>
using namespace std;

//print array
void printArray(vector<int> ans) {

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] <<" ";
    } cout << endl;
}


void findUnion(vector<int> arr, vector<int> brr) {

    vector<int> ans; //store here elements of arr and brr

    //push all element of arr to ans
    for (int i = 0; i < arr.size(); i++) {
        ans.push_back(arr[i]);
    }

    //push all element of brr to ans
    for (int i = 0; i < brr.size(); i++) {
        ans.push_back(brr[i]);
    }

    //print array
    printArray(ans);
}

int main () {

    vector <int> arr {2, 4, 6, 8};
    vector <int> brr {1, 3, 7};  

    //Union of 2 arrays
    findUnion(arr, brr);

    //print array
    //printArray(ans);

    return 0;
}