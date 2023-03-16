#include<iostream>
#include<vector>
using namespace std;

int findFirstOcc(vector<int> arr, int target) {
    int ans = -1;
    int s = 0;
    int e = arr.size()-1;
    int mid = s + (e - s) / 2;
    while(s <= e) {
        //agr target mil gya
        if(arr[mid] == target) {
            ans = mid; //ans store kra do
            e = mid - 1; //ab left me search krna h gr 1st occurance hai to
        }
        else if(arr[mid] > target) //left me search krna
            e = mid - 1;
        else if(arr[mid] < target) //right me search krna
            s = mid + 1;
        mid = s + (e - s) / 2; //update mid
    }
    return ans;
}

int findLastOcc(vector<int> arr, int target) {
    int ans = -1;
    int s = 0;
    int e = arr.size()-1;
    int mid = s + (e - s) / 2;
    while(s <= e) {
        //agr target mil gya
        if(arr[mid] == target) {
            ans = mid; //ans store kra do
            s = mid + 1; //ab right me search krna h agr last occurance hai to
        }
        else if(arr[mid] > target) //left me search krna
            e = mid - 1;
        else if(arr[mid] < target) //right me search krna
            s = mid + 1;
        mid = s + (e - s) / 2; //update mid
    }
    return ans;
}

int main () {

    vector<int> arr{4,4,4,4,4};
    int target = 4;
    int firstOccIdx = findFirstOcc(arr, target);
    cout << "First occurance index: " << firstOccIdx << endl;

    int lasttOccIdx = findLastOcc(arr, target);
    cout << "Last occurance index: " << lasttOccIdx << endl;

    return 0;
}