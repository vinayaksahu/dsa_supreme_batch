#include<iostream>
using namespace std;

int main() {
  int n;
  std::cin>>n;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n - i - 1; j++) {
      printf("  ");
    }
    for (int j = i; j < i; j++) {
      printf("%d ", j);
    }
    int ele = 2 * (n - i - 1);
    for (int j = 1; j <= i - 1; j++) {
      printf("%d ", ele--);
    }
    printf("\n");
  }
  return 0;
}


/*

    1
   232
  34543
 4567654
567898765

*/