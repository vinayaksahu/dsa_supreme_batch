#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

//Recursive
int mini(vector<int> arr, int n) {
    //base case
    if (n == 1) {
        return arr[0];
    }
    //RR
    int min = mini(arr, n-1);

    //processing
    if (arr[n-1] < min) {
        return arr[n-1];
    }
    return min;
}

int maxi(vector<int> arr, int n) {
    //base case
    if (n == 1) {
        return arr[0];
    }
    
    //RR
    int max = maxi(arr, n-1);

    //processing
    if (arr[n-1] > max)
        return arr[n-1];
    
    return max;
}

//Iterative
/* int mini(vector<int> arr) {

    int min = INT_MAX;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}

int maxi(vector<int> arr) {
    
    int max = INT_MIN;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}
 */

int main() {

    vector<int> arr = {1,2,3,4,5,6,7,8,9};

    int size = arr.size();

    int min = mini(arr, size);

    int max = maxi(arr, size);

    cout << "Minimum element of the array: " << min << endl
         << "Maximum lelment of the array: " << max << endl;

    return 0;
}