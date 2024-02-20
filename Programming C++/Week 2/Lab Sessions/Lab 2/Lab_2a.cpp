#include <iostream>
#include <cmath>

int main() {
  using namespace std;

  float p = 10492, r = 1.0454, total;
  int t = 7;
  float power;

  total = p * pow(r, t);

  cout << total;

  return 0;
}
