#include<iostream>
#include<vector>
using namespace std;

void findIntersection(vector<int> arr, vector<int> brr) {

    vector<int> ans;

    for (int i = 0; i < arr.size(); i++) {
        int element = arr[i];
        for (int j = 0; j < brr.size(); j++) {
            if(element == brr[j]) {
                //brr[j] = -1;  <-mark traversed element
                ans.push_back(element);
                break;
            }
        }
    }

    //print ans array
    for (auto value : ans) {
        cout << value <<" ";
    } cout << endl;
    
}

int main() {
    
    vector<int> arr{1, 2, 3, 3, 4, 5,6};
    vector<int> brr{3, 4, 6};

    findIntersection(arr, brr);

    return 0;
}
