#include<iostream>
using namespace std;

int main() {

    int n = 5;

    for (int i = 0; i < n; i++) { //number of rows
        int num_idx = 8-i; //num printing starting index
        int num = i+1; //num that has to be print
        int count_num = num; //
        for (int j = 0; j < 17; j++) { //total number of element in every element 
            if (j == num_idx && count_num > 0) {
                cout << num;
                num_idx += 2;
                count_num--;
            }
            else
                cout << "*";
        } cout << endl; 
    }
    

/*     for (int i = 0; i < n; i++) {
        int start_num_index = 8-i;
        int num = i+1;
        int count_num = num;
        for (int j = 0; j < 17; j++) {
            if (j == start_num_index && count_num > 0) {
                cout << num;
                start_num_index += 2;
                count_num--;
            } else {
                cout << "*";
            }
        }
        cout << endl;
    } */

    return 0;
}

/*

********1********
*******2*2*******
******3*3*3******
*****4*4*4*4*****
****5*5*5*5*5****

*/