#include<iostream>
#include<vector>
using namespace std;

int oddOccuring(vector<int> arr) {
    int s = 0;
    int e = arr.size()-1;
    while(s <= e) {
        // find mid
        int mid = s + (e - s) / 2;
        //sigle element
        if(s == e)
            return s;
        //for even index
        if(mid % 2 == 0) {
            if(arr[mid] == arr[mid+1])
               s = mid + 2; //Right search
            else
               e = mid; //Left search <- end could be the ans 
        }
        //for odd index
        else {
            if(arr[mid-1] == arr[mid])
               s = mid + 1; //Right search
            else
               e = mid - 1; //Left search <- e could be the ans
        }
    }
    return -1;
}

int main() {

    vector<int> arr{1,1,2,2,3,3,4,4,3,6,6,4,4};

    int ans = oddOccuring(arr);

    cout << "index: " << ans << endl;

    cout << "Element: " << arr[ans];

    return 0;
}