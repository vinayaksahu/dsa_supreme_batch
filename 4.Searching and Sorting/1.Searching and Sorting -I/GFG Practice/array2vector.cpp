#include <iostream>
#include <vector>
using namespace std;
 
int main() {
   int brr[] = {5, 5, 5, 6, 6, 6, 7, 7};
   vector<int> v(begin(brr), end(brr));
 
   for(int i = 0; i < v.size(); i++) {
       cout << v[i] << " ";
   }     

   return 0; // return to Operating System
}