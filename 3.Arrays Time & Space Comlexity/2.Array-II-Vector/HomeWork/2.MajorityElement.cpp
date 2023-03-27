#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

void findMajority(vector<int> arr) {
    int maxCount = 0;
    int index = -1;

    //traverse all elements of the array to find maxCount
    for (int i = 0; i < arr.size(); i++) {
        int count = 0;
        for (int j = 0; j < arr.size(); j++)
            if (arr[i] == arr[j])
                count++;   
        if (count > maxCount) {
            maxCount = count;
            index = i;
        }
    }

    if(maxCount > arr.size()/2)
        cout << "Majority element is " << arr[index];
    else
        cout << "No majority element";
}

int main() {

    vector<int> arr{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,3,3,0,1,2,3,0,2,1,3};

    findMajority(arr);

    return 0;
}