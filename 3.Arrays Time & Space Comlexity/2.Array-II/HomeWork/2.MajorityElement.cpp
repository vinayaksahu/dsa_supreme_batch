#include<iostream>
#include<vector>
using namespace std;

int findMajority(vector<int> arr) {

    int count = 0;

    for (int i = 0; i < arr.size(); i++) {
        int checkElement = arr[i];
        for (int j = 0; j < arr.size(); j++) {
            if(checkElement == arr[j]) {
                count++;
                if(count > arr.size()/2)
                    break;
            }
        }
    }
    
    return count;
}

int main() {

    vector<int> arr{1,2,3,1,2,3,0,3,3,3,3,3,3,3};

    int majorityElement = findMajority(arr);

    cout << majorityElement;

    return 0;
}