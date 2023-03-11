/* Given an array arr[] of length, N. One has to partition the array into multiple
beautiful array.
 Definition of a Beautiful Array: If we sort the array, no two neighbor elements
have a difference of more than K.
The task is to find the minimum number of beautiful arrays one can create from the
given array
Note: To minimize the number of beautiful arrays, one can add X numbers of
elements in the original array 
Example 1:

Input: arr[] = {1,1,3,1,1,6,1,1,8,10}

X=3,K=1

Output: 2

Explanation: You can add atmost 3 elements in the original array
to make the array beautiful from the given array.

So lets say you add 2, 7 and 9 in the original array.

Now we can make two beautiful array from it.

arr1[] = {1,1,1,1,1,1,2,3}

arr2[]= {6,7,8,9,10}

So the output will be 2.

Your Task:

You don't need to read input or print anything. Your task is to complete the function
beautifulArray() which takes the array of integers arr, x and k as parameters and
returns an integer, the minimum number of beautifull array.

Constraints:
1<N<10^5

1 < Arr[i] < 10^9
1<k<10^9
0<x<10^9

*/


// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

int beautifulArray(vector<int>& a, int x, int k);
 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int beautifulArray(vector<int>& a, int x, int k) {
        // Code here
        int n = a.size();
        sort(a.begin(), a.end()); // sort the array
        
        int i = 0, cnt = 0;
        while (i < n) {
            int j = i;
            while (j < n && a[j] - a[i] <= k) j++; // find the position j where the difference between arr[j] and arr[i] is greater than k
            
            int numToAdd = (j - i - 1) / (k + 1); // calculate the number of elements that can be added between i and j-1
            cnt += numToAdd;
            i = j; // update i to j
        }
        
        if (i == n) return cnt; // if all elements have been covered, return cnt
        
        int remaining = n - i; // if some elements are left, form another beautiful array with them
        cnt++;
        int numToAdd = (remaining - 1) / (k + 1); // calculate the number of elements that can be added
        cnt += numToAdd;
        return cnt;
        // Code here
    }
};

// { Driver Code Starts.

int main() {
        vector<int> arr = {1,1,3,1,1,6,1,1,8,10};
    int x = 3, k = 1;
    cout << beautifulArray(arr, x, k) << endl; // output: 2
    return 0;
/*     int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int x, k;
        cin >> x >> k;

        Solution obj;

        int ans = obj.beautifulArray(a, x, k);

        cout << ans << endl;
    } */
}  // } Driver Code Ends