#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findFirstOcc(vector<int> arr, int target) {
    int s = 0;
    int e = arr.size()-1;
    int ans = -1;
    while(s <= e) {
        int mid = s + (e - s) / 2;
        //agar mil gya ya chhota hai
        if(target == arr[mid]) {
            ans = mid;
            e = mid - 1;
        }
        else if(target < arr[mid])
            e = mid - 1;
        else if(target > arr[mid])
            s = mid + 1;
    }
    return ans;
}

/* int findLastOcc(vector<int> arr, int target) {
    int s = 0;
    int e = arr.size()-1;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while(s <= e) {
        //agar mil gya 
        if(target == arr[mid]) {
            ans = mid;
            s = mid + 1;
        }
        else if(target > arr[mid])
            s = mid + 1;
        else if(target < arr[mid])
            e = mid - 1;
        mid = s + (e - s) / 2;
    }
    return ans;
} */
 
int findLastOcc(vector<int> arr, int target) {
    int ans = -1;
    int s = 0;
    int e = arr.size()-1;
    while(s <= e) {
        int mid = s + (e - s) / 2;
        //agr target mil gya ya target chhota hai mid wale element se to
        if(arr[mid] <= target) {
            ans = mid; //ans me mid store kra de
            s = mid + 1; // last occurance hai to right me search krna hai - upadte start
        }
        //agr nhi mila - mid se chhota hai target - update end
        else //if(target < arr[mid])
            e = mid - 1;
    }

    return ans;
}

int main () {
/* First and Last occurance */
    vector<int> arr{4,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,7,7};
    int target = 5;
    int firstOccIdx = findFirstOcc(arr, target);
    cout << "Function: First occurance index: " << firstOccIdx << endl;
    int lasttOccIdx = findLastOcc(arr, target);
    cout << "Function: Last occurance index: " << lasttOccIdx << endl;

/* Total number of occurance */
    int totalOcc = lasttOccIdx - firstOccIdx + 1;
    cout << "Total number of occurance: " << totalOcc << endl;

/* Lower and Upper Bound */
    int brr[] = {5, 5, 5, 6, 6, 6, 7, 7};
    //int n = sizeof(brr) / sizeof(brr[0]);
    vector<int> v(begin(brr), end(brr));
    cout << endl << "Print array to vector" << endl;
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] <<" ";
    } cout << endl;
/* 
    auto lower = lower_bound(v.begin(), v.end(), 5);
    auto upper = upper_bound(v.begin(), v.end(), 5);
*/
    vector<int> :: iterator lower, upper;
    lower = lower_bound(v.begin(), v.end(), 5);
    upper = upper_bound(v.begin(), v.end(), 5);

    cout << "Vector: First occurance index: " << (lower-v.begin()) << endl;
    cout << "Vector: Last occurance index: " << (upper-v.begin()-1) << endl;

    return 0;
}