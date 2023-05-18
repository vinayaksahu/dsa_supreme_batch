#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void print(vector<int> v) {
    for (auto &&i : v) {
        cout << i << " ";
    } cout << endl;
}

void bruteForce(vector<int> arr) {
    
    for (int i = 0; i < arr.size(); i++) {
        int ans = -1;
        for (int j = i+1; j < arr.size(); j++) {
            if (arr[i] > arr[j]) {
                ans = arr[j];
                break;
            }
        } 
        cout << ans << " ";
    }
    cout << endl;
}

void stackMethod(vector<int> input) {
    
    vector<int> ans(input.size()); //create ans array size of input array
    stack<int> s; //initialize stack
    s.push(-1); //with -1
    for (int i = input.size()-1; i >= 0; i--) { //traverse input array
        int curr = input[i]; 
        while (s.top() >= curr) { //remove top element of stack
            s.pop(); //until you find curr element of input array is less then top element of array
        }
        ans[i] = s.top(); //if top element of stack found less then curr element store in ans array
        s.push(curr); //then push curr element into stack
    }

    print(ans); //print ans array
}

int main() {

    vector<int> input;
    input.push_back(4);
    input.push_back(8);
    input.push_back(9);
    input.push_back(5);

    print(input);

    bruteForce(input);

    stackMethod(input);
}