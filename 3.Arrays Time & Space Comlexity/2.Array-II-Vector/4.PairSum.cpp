#include<iostream>
#include<vector>
using namespace std;

void findPairSum(vector<int> arr, int sum) {

    for (int i = 0; i < arr.size(); i++) {
        int element1 = arr[i];
        for (int j = i+1; j < arr.size(); j++) {
            int element2 = arr[j];
            if (sum == element1 + element2) {
                cout << element1 << " " << element2 << endl;           
            }
        }
    }
    
}

int main() {

    vector<int> arr{1,2,3,4,5,6,7,8,9};

    //find ki kitne pairs ka sum 13 hai
    int sum = 13;

    findPairSum(arr, sum);

    return 0;
}