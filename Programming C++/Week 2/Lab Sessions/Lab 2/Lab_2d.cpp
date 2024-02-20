#include <iostream>

int main() {
  using namespace std;

  int x = 10, y = 50;

  bool check1 = x == y;
  bool check2 = x < 20 && y == x;

  cout << "x and y are the same object: " << check1 << endl;
  cout << "x is less than 20, and y is equal to x: " << check2 << endl;

  return 0;
}
