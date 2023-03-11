/*
A[][] is a (RxC) boolean matrix such that each of its element is either 0 or 1. Each row of the matrix is
sorted. Find the index of the row which has the maximum number of ones. If there are multiple such rows
then return the smallest index.

Anarray B[] of size R is used to construct matrix A such that B[i] denotes the number of zeroes in the ith row.

Example 1:

Input:
R=3, C=3
B[]={1, 0, 2}

output: 1

Explanation:
A[][] =[[0,1,1],[1,1,0],[0,0,1]]
Row with index 1 has maximum number of 1s.

Your Task:

You don't need to read input or print anything. Your task is to complete the function solve() which takes R and
Cas input parameters and returns the index of the row which has maximum number of 1s. If there are
multiple such rows then return the smallest index. The returned index must be according to 0 based
indexing.

The matrix A or the array Bare not directly accessible. You are provided a helper function get(i,j) which will
fetch the value of A[i] [j].

expected time complexity: O(R+C)
expected auxiliary space: O(1)

constraints:
1<=R, C<=10^5

code in cpp

*/

// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

class A
{
private:
  int R,C;
  vector<int> B;

public:
  void init(int _R,int _C,vector<int> _B)
  {
    R=_R;
    B=_B;
    C=_C;
  }
  int get(int i,int j)
  {
    assert(0<=i&&i<R&&0<=j&&j<C);
    if(B[i]>=j+1)
      return 0;
    return 1;
  }
}a;

 // } Driver Code Ends
//User function Template for C++

class Solution{   
private:
    // do not edit this function
    // use it to get the value of A[i][j]
    int get(int i,int j){
        return a.get(i,j);
    }
public:
    int solve(int R,int C){
        //code here
        //code here
    }
};

// { Driver Code Starts.
signed main()
{
 
  int t;
  cin>>t;
  while(t--)
  {
      int R,C;
      cin>>R>>C;
      
      vector<int> B(R);
      for(int i=0;i<R;i++)
      {
        cin>>B[i]; 
        /*
            B[i] denotes the number of zeros in the ith row 
            A[i][j]=0 if j+1<=B[i]
            A[i][j]=1 else 
        */
        assert(0<=B[i]&&B[i]<=C);
      }
      a.init(R,C,B);
      Solution obj;
      long long answer=obj.solve(R,C);
      cout<<answer<<endl;
  }
}
  // } Driver Code Ends