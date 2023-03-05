#include <iostream>
using namespace std;

int main() {
  // heart star pattern
  int size=10;
  //cin>>size;

  for (int i = size / 2; i < size; i += 2) {
    // print first spaces
    for (int j = 1; j < size - i; j += 2) {
      cout << " ";
    }
    // print first stars
    for (int j = 1; j < i + 1; j++) {
      cout << "*";
    }
    // print second spaces
    for (int j = 1; j < size - i + 1; j++) {
      cout << " ";
    }
    // print second stars
    for (int j = 1; j < i + 1; j++) {
      cout << "*";
    }
    cout << "\n";
  }
  // lower part
  // inverted pyramid
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < i; j++) {
      cout << " ";
    }
    for (int j = 0; j < 2*(size-i)-1; j++) {
      cout << "*";
    }
    cout << "\n";
  }
  return 0;
}