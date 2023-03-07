#include<iostream>
#include<vector>
using namespace std;

void pairSum(vector<int> arr, int sum) {

    for (int i = 0; i < arr.size(); i++) {
        int element = arr[i];
        //for every element, will travese on next element
        for (int j = i+1; j < arr.size(); j++) {
            if(sum == element + arr[j])
                cout << element <<", " << arr[j] <<endl;
        }   
    }
}

int main() {
    
    vector<int> arr{1,2,3,4,5,6,7,8,9};

    int sum = 10;

    pairSum(arr, sum);    

    return 0;
}
