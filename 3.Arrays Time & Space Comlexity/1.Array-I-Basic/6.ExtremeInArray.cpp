#include<iostream>
#include<vector>
using namespace std;

void extremeElement(vector<int> arr) {

    // 2 pointer approach
    int start = 0;
    int end = arr.size() - 1;
    while(start <= end) {
        if(start == end) {
            cout << arr[start];
            start++;
            end--;
        }
        else {
            cout << arr[start] << " " << arr[end] << endl;        
            start++;
            end--;
        }
    }
        
}

int main() {
    
    vector<int> arr{1,2,3,4,5,6,7,8,9};

    //print extreme in array
    extremeElement(arr);

    return 0;
}