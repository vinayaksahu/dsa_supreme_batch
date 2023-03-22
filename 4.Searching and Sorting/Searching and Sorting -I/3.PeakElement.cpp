#include<iostream>
#include<vector>
using namespace std;

int findPeak(vector<int> arr) {

    int s = 0;
    int e = arr.size()-1;
    while (s < e) {
        int mid = s + (e - s) / 2;
        if(arr[mid] < arr[mid + 1])
            s = mid + 1; //right search
        else //if (arr[mid] > arr[mid + 1])
            e = mid; //would be an ans at last iteration
    }
    return e;    
}

int main () {

    vector<int> arr{1,2,10,12,5,2};

    int peakIndex = findPeak(arr);

    cout << "Peak Element: " << arr[peakIndex];

    return 0;
}