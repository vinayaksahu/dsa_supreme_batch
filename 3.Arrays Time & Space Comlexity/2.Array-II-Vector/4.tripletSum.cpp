#include<iostream>
#include<vector>
using namespace std;

void tripletSum(vector<int> arr, int sum) {

    for (int i = 0; i < arr.size(); i++) {
        int element1 = arr[i];
        for (int j = i+1; j < arr.size(); j++) {
            int element2 = arr[j];
            for (int k = j+1; k < arr.size(); k++) {
                int element3 = arr[k];
                if (sum == element1 + element2 + element3) {
                    cout << element1 <<", "<<element2 <<", "<<element3<<endl; 
                }
            }
        }
    }
}

int main() {
    
    vector<int> arr{1,2,3,4,5,6,7,8,9};

    int sum = 10;

    tripletSum(arr, sum);

    return 0;
}
