// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution {
  public:
    vector<char> printPattern(int N) {
        //code Here
        vector<char> pattern;
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= i; j++) {
                pattern.push_back('*');
            }
            pattern.push_back(' ');
        }
        return pattern;
        //code Here
    }
};


// { Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        Solution obj;
        
        vector<char>ans = obj.printPattern(N);
        for(auto it : ans) {
            cout<<it;
        }
        cout<<endl;
    }
}
  // } Driver Code Ends