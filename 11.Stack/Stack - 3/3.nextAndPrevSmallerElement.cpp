#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void printArray(vector<int> v) {

    for (auto &&i : v) {
        cout << i << " ";
    } cout << endl;
}

void nextSmallerElementUsingBrute(vector<int> input) {

    for (int i = 0; i < input.size(); i++) {
        int ans = -1;
        for (int j = i+1; j < input.size(); j++) {
            if (input[i] > input[j]) {
                ans = input[j];
                break;
            }
        }
        cout << ans << " ";
    } cout << endl;
    
}

void preSmallerElementBrute(vector<int> input) {

    for (int i = 0; i < input.size(); i++) {
        int ans = -1;
        for (int j = i-1; j >= 0; j--) {
            if (input[i] > input[j]) {
                ans = input[j];
                break;
            }
        }   
        cout << ans << " ";
    } cout << endl << endl;
}

void nextSmallerElementStack(vector<int> input) {

    vector<int> ans(input.size()); //create ans array size of input array
    stack<int> s; //initialize stack
    s.push(-1); //with -1
    for (int i = input.size()-1; i >= 0; i--) { //traverse input array reversely
        int curr = input[i]; 
        while (s.top() >= curr) { //remove top element of stack
            s.pop(); //until you find curr element of input array is less then top element of array
        }
        ans[i] = s.top(); //if top element of stack found less then curr element store in ans array
        s.push(input[i]); //then push curr element into stack
    }

    printArray(ans); //print ans array
}

void preSmallerElementStack(vector<int> input) {

    vector<int> ans(input.size());
    stack<int> s;
    s.push(-1);
    for (int i = 0; i < input.size(); i++) {
        while (s.top() >= input[i]) {
            s.pop();
        }
        ans[i] = s.top();
        s.push(input[i]);
    }
    
    printArray(ans);
}

int main() {

    vector<int> input;
    input.push_back(5);
    input.push_back(8);
    input.push_back(6);
    input.push_back(3);
    input.push_back(2);

    cout << "Given input array: " << endl;
    printArray(input);
    cout << endl;


    cout << "Next smaller element(brute): " << endl;
    nextSmallerElementUsingBrute(input);

    cout << "Previous smaller element(brute): " << endl;
    preSmallerElementBrute(input);
    


    cout << "Next smaller element(stack): " << endl;
    nextSmallerElementStack(input);

    cout << "Previous smaller element(stack): " << endl;
    preSmallerElementStack(input);

    return 0;
}