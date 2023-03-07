#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

void printArray(vector<int> ans) {

    for(auto value : ans) {
        cout << value << " ";
    } cout << endl;
}

void findUnion(vector<int> arr, vector<int> brr) {
    
    vector<int> ans;

    //push all elements of arr to ans
    for (int i = 0; i < arr.size(); i++) {
        ans.push_back(arr[i]);
    }

    //push all elements of brr to ans
    for (int i = 0; i < ans.size(); i++) {
        int element = ans[i];
        for (int j = 0; j < brr.size(); j++) {
            if (element != brr[j]) {
                ans.push_back(brr[j]);
            }
        }
    }
    

    //print ans 
    printArray(ans);
}

int main() {
    
    vector<int> arr{2, 4, 6, 8, 7};
    vector<int> brr{1, 3, 5, 7};

    findUnion(arr, brr);

    return 0;
}
