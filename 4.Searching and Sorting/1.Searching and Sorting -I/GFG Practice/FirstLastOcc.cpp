//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n , int x ) // https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1
{   
    vector<int> ans{INT_MIN};
    int s = 0;
    int e = n;
    int mid = s + (e - s) / 2;
    //first occurance
    while (s <= e) {
        if(x == arr[mid]) {
            ans.push_back(mid);
            e = mid - 1;
        }
        else if(x < arr[mid])
            s = mid + 1;
        else if(x > arr[mid])
            e - mid - 1;
        mid = s + (e - s) / 2;
    }
    //last occurance
    while (s <= e) {
        if(x == arr[mid]) {
            ans.push_back(mid);
            s = mid + 1;
        }
        else if(x < arr[mid])
            s = mid + 1;
        else if(x > arr[mid])
            e - mid - 1;
        mid = s + (e - s) / 2;
    }
    return ans;
}

//{ Driver Code Starts.

int main()
{
        int n = 9, x = 5;

        int arr[n] = {1, 3, 5, 5, 5, 5, 67, 123, 125},i;
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    
    return 0;
}



// } Driver Code Ends