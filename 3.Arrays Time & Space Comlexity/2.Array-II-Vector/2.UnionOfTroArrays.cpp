#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int> ans) {

    for(auto val : ans) {
        cout << val << " ";
    }
}

void findUnion(vector<int> a, vector<int> b) {

    vector<int> ans;

    //insert elements of array 'a' to array 'ans'
    for (int i = 0; i < a.size(); i++) {
        ans.push_back(a[i]);
    }

    //insert elements of array 'b' to array 'ans'
    for (int i = 0; i < b.size(); i++) {
        ans.push_back(b[i]);
    }   

    //print
    printArray(ans);
}

int main() {

    vector<int> arr{1,3,5,7};
    vector<int> brr{2,4,6,8};

    //find union of the array
    findUnion(arr, brr);
    return 0;
}