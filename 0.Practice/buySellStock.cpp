#include<iostream>
#include<vector>
#include<stack>
using namespace std;

/* int maxProfit(vector<int> arr) {

    int max = 0;

    for (int i = 0; i < arr.size(); i++) {
        for (int j = i+1; j < arr.size(); j++) {
            int diff = arr[j] - arr[i];
            if(diff > max)
                max = diff;   
        }
    }

    return max;
    
} */


int maxProfit(vector<int>& arr) {
    int n = arr.size();
    int profit = 0;
    stack<int> s;
    s.push(arr[0]);
    for(int i = 1; i < n; i++) {
    
        if(arr[i] < s.top()) //stack k top se chhota hai
            s.push(arr[i]);
        else if(arr[i] > s.top()) { // stack k top se bda hai
            int p = arr[i] - s.top();
            profit = max(p, profit);
        }
        
    }
    return profit;
}

int main() {

    vector<int> arr{7,1,5,3,6,4};

    int profit = maxProfit(arr);

    cout << profit << endl;
    
    return 0;
}
