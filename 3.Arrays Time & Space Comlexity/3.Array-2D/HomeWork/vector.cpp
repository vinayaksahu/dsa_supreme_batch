#include<stdio.h>

#include<vector>

int main() {

    vector<int> arr{1,2,3,4,5,6};

    for (int i = 0; i < arr.size(); i++) {
        printf("%d", arr[i]);
    }
    

    return 0;
}