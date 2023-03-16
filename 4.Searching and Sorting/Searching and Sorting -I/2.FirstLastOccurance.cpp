#include<iostream>
#include<vector>
using namespace std;

int findFirstOcc(vector<int> arr, int target) {

    int s = 0;
    int e = arr.size()-1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e) {
        if(arr[mid] == target) {
            ans = mid;
            e = mid - 1;
        }
        else if(arr[mid] > target) {
            s = mid + 1;
        }
        else if(arr[mid] > target) {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    

    return ans;
}

int main () {

    vector<int> arr{4,4,4,4,4,4,4,4,4,4,4,4,4};
    int target = 4;
    int firstOcc = findFirstOcc(arr, target);
    cout << "First occurance index: " << firstOcc;

    return 0;
}