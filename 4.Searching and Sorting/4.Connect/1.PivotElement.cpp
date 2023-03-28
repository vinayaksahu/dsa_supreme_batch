#include<iostream>
#include<vector>
using namespace std;

int findPivot(vector<int> arr) {
    int s = 0;
    int e = arr.size() - 1;
    while (s <= e) {
        int mid = s + (e - s) / 2; //find mid
        if(s == e) //single element
            return s;
        if(mid <= e && arr[mid] > arr[mid+1]) //mid
            return mid;
        if(mid-1 >= s && arr[mid-1] > arr[mid]) //mid-1
            return mid - 1;
        if(arr[s] > arr[mid]) //left search
            e = mid - 1;
        else     //right search
            s = mid + 1;
    }
    
    return -1;
}

int main() {

    vector<int> arr{8,9,10,2,4,6};

    int pivot = findPivot(arr);

    if(pivot == -1)
        cout << "Something wrong.";
    else
        cout << "Pivot element is: " << arr[pivot];

    return 0;
}