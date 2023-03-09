#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

void findMajority(vector<int> arr) {

    int maxCount = 0;
    int index = INT_MIN;
    for (int i = 0; i < arr.size(); i++) {
        int count = 0;
        for (int j = 0; j < arr.size(); j++) {
            if (arr[i] == arr[j]) 
                count++;
        }
        if (count > maxCount) {
            maxCount = count;
            index = i;
        }
    }

    if (maxCount > arr.size()/2) {
        cout << arr[index] << endl;
    }
    else {
        cout << "No majority element.";
    }
}

int main() {

    vector<int> arr{1,2,3,1,2,3,0,3,3,3,3,3,3,3};

    findMajority(arr);

    return 0;
}