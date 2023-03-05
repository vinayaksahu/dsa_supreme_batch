#include <iostream>
using namespace std;

int main() {
  // size of the pyramid
  int size = 5; //cin>>size;
  for (int i = 0; i < size; i++) {
    // print spaces
    for (int j = 0; j < i; j++) {
      //cout << "  ";
      cout << " ";
    }
    // print stars
    //for (k = 0; k < 2 * size - 1; k++) {
    for (int k = 0; k < 2 * (size - i) - 1; k++) {
      cout << "*";
    }
    cout << "\n";
  }
  return 0;
}