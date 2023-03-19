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
        else
            e = mid;
    }
    return e;    
}

int main () {

    vector<int> arr{1,10,5,2};

    int peakElement = findPeak(arr);

    cout << "Peak Element: " << peakElement;

    return 0;
}