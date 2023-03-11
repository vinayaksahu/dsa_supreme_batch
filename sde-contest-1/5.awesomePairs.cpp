/*
Geek is busy solving problems on Bitwise operators. Today while solving problems, he
observed something which intrigued him very much. Не discovered that there are some awesome pairs in
a list of integers whose Bitwise AND is strictly greater than Bitwise XOR among them.
Given a list arr[] of N integers find the number of awesome pairs.
Example 1:
  Input:
  N = 4
 arr[] = {6, 2, 5, 3}
  Output: 2
  Explanation:
  Awesome pairs are (6, 5) and (2, 3).
Example 2:
  Input:
  N = 3
 arr[] = {1, 1, 1}
  Output: 3
  Explanation: All pairs are awesome.
Your Task:
 You don't need to read input or print anything. Your task is to complete the function pairs() that takes the
 array arr[] and its size N as input parameters and return the number of awesome pairs.
 Constraints:
 1 <= N <= 10^6
 0 <= arr[i] <= 10^9
code in cpp using binary search
*/

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// Back-end complete function template for C++

class Solution {
  public:
    long long pairs(int N, int arr[]) {
  
        int count = 0;
        
        for(int i=0; i<N-1; i++) {
            for(int j=i+1; j<N; j++) {
                if((arr[i] & arr[j]) > (arr[i] ^ arr[j])) {
                    count++;
                }
            }
        }
        
        return count;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];

        Solution ob;
        cout << ob.pairs(N, arr) << endl;
    }
    return 0;
}
  // } Driver Code Ends