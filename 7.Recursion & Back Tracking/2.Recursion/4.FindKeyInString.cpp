#include<iostream>
#include<limits.h>
using namespace std;

bool checkKey(string& str, int i, int n, char& key) {
    //base case
    if(i >= n)
        return false;
    //1 case solve karo
    if(str[i] == key)
        return true;
    
    //baki recursion
    return checkKey(str, i+1, n, key);
}

int main() {
    
    string str= "lovebabbar";

    int n = str.length();

    char key = 'r';
    int i = 0;
    bool ans = checkKey(str, i, n, key);

    cout << "ans is: " <<ans <<endl;

    return 0;
}
