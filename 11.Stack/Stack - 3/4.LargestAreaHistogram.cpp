#include<iostream>
#include<limits.h>
#include<stack>
#include<vector>
using namespace std;

vector<int> prevSmallerElement(vector<int> input) {
    
    vector<int> ans(input.size());
    stack<int> s;
    s.push(-1);

    for (int i = 0; i < input.size(); i++) {
        int curr = input[i];
        while (s.top() != -1 && input[s.top()] >= curr) {
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}

vector<int> nextSmallerElement(vector<int> input) {

    vector<int> ans(input.size());
    stack<int> s;
    s.push(-1);

    for (int i = input.size()-1; i >= 0; i--) {
        int curr = input[i];
        while (s.top() != -1 && input[s.top()] >= curr) {
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}

int LargestRectanglelArea(vector<int> height) {

    vector<int> prev = prevSmallerElement(height);
    vector<int> next = nextSmallerElement(height);

    int maxArea = INT_MIN;

    for (int i = 0; i < height.size(); i++) {

        int length = height[i];

        if (next[i] == -1) {
            next[i] = height.size();
        }
        
        int width = next[i] - prev[i] - 1;
        int area = length * width;
        maxArea = max(maxArea, area);
    }
    return maxArea;
}

int main() {

    vector<int> height;
    height.push_back(2);
    height.push_back(1);
    height.push_back(5);
    height.push_back(6);
    height.push_back(2);
    height.push_back(3);

    int maxArea = LargestRectanglelArea(height);
    cout << maxArea << endl;

    return 0;
}