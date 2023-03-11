/*
Given an array al] of length N. You have to make the array stable

Definition of the Stable Array: A array is called stable when, there exists a number X ,, such that every
number from the array occurs only X times or zero times.

The task is to find the minimum number that needs to be removed to make the array stable.

Example 1:

Input = a[] = {4,3,1,3,1,2}

output : 2

Explanation : If we remove 1st and last element from

the given array, then the array will be stable

resultant array: 3 1 3 1 (every element occure only 2 times)

Example 2:

Input : a[] = {1,1,2,4,1,2,2}

output : 1

Explanation : If we remove 4th element i.e. 4,

then the array will be stable

resultant array: 1 1 21 2 2 (every element occure only 3 times)

Your Task:

You don't need to read input or print anything. Your task is to complete the function stableArray() which
takes the array of integers arr, nas parameters and returns an integer, the minimum number of elements
needs to be removed to make the given array stable



*/

// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;





 // } Driver Code Ends
//User function Template for C++


class Solution{
  public:
  int stableArray(vector<int>& a){
      //Code Here
    // First, we need to count the frequency of each element in the array
    unordered_map<int, int> freq;
    for (int x : a) {
        freq[x]++;
    }

    // Now we need to find the value of X that makes the array stable
    int maxFreq = 0;
    int totalFreq = 0;
    for (auto p : freq) {
        int f = p.second;
        maxFreq = max(maxFreq, f);
        totalFreq += f;
    }
    int minRemovals = totalFreq - maxFreq;

    return minRemovals;
      //code Here
  }
};

// { Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        Solution obj;
        int ans = obj.stableArray(a);
        
        cout<<ans<<endl;
    }
}  // } Driver Code Ends