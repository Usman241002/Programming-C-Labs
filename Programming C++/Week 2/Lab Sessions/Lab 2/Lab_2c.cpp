#include <iostream>

int main() {
  using namespace std;

  int a;
  bool x = a < 10;
  bool y = a >= 6;
  bool z = a >= 5;

  a = 7;

  cout << "When a = " << a << ":\n\n";

  cout << "X: " << x << endl;
  cout << "Y: " << y << endl;
  cout << "Z: " << z << endl;

  return 0;
}
