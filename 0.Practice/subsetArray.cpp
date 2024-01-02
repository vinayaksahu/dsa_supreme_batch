#include <bits/stdc++.h>
using namespace std;

int isSubset(int a1[], int a2[], int n, int m) {
    
    int i = 0;
    int j = 0;
    int count = 0;
    while (i < n && j < m) {
        if(a1[i] == a2[j]) {
            i++;
            j++;
            count++;
        } else {
            i++;
        }
    }
    return (count == m) ? 1 : 0;
}

int main() {

    int n=7, m=3;

    int a1[n] = {1, 2, 4};
    int a2[m] = {1, 2, 3, 4, 4, 5, 6};

    cout << isSubset(a1, a2, n, m) << endl;

    return 0;
}