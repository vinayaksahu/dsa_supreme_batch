#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void print(vector<int> v) {
    for (auto &&i : v) {
        cout << i << " ";
    } cout << endl << endl;
}

void nextSmallerElementBruteForce(vector<int> arr) {
    
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

void nextSmallerElement(vector<int> input) {
    
    vector<int> ans(input.size()); //create ans array size of input array
    stack<int> s; //initialize stack
    s.push(-1); //with -1
    for (int i = input.size()-1; i >= 0; i--) { //traverse input array reversely
        int curr = input[i]; 
        while (s.top() >= curr) { //remove top element of stack
            s.pop(); //until you find curr element of input array is less then top element of array
        }
        ans[i] = s.top(); //if top element of stack found less then curr element store in ans array
        s.push(curr); //then push curr element into stack
    }

    print(ans); //print ans array
}

void prevSmallerElementBruteForce(vector<int> arr) {

    for (int i = 0; i < arr.size(); i++) {
        int ans = -1;
        for (int j = i-1; j >= 0; j--) {
            if (arr[i] > arr[j]) {
                ans = arr[j];
                break;
            }
        }
        cout << ans << " ";
    } cout << endl;
} 

void previousSmallerElement(vector<int> input) {

    vector<int> ans(input.size());
    stack<int> s;
    s.push(-1);
    for (int i = 0; i < input.size(); i++) {
        int curr = input[i];
        while (s.top() >= curr) {
            s.pop();
        }
        ans[i] = s.top();
        s.push(curr);
    }
    
    print(ans);
}

int main() {

    vector<int> input;
    input.push_back(4);
    input.push_back(8);
    input.push_back(9);
    input.push_back(5);

    cout << "Given Input element: " << endl;
    print(input);


    cout << "Next smaller element(brute force)" << endl;
    nextSmallerElementBruteForce(input);

    cout << "Next smaller element(using stack): " << endl;
    nextSmallerElement(input);



    cout << "Previous smaller element(brute force): " << endl;
    prevSmallerElementBruteForce(input);

    cout << "Previous smaller element(using stack): " << endl;
    previousSmallerElement(input);
}