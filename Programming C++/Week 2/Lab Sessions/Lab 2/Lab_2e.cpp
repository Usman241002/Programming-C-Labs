#include <iostream>
#include <bitset>

int main () {
  using namespace std;

  bitset<8> x(40 & 128);
  bitset<8> y(92 | 34);
  bitset<8> z(128);

  cout << "Binary AND on two numbers 40 and 128: " << x << endl;
  cout << "Binary OR on two numbers 92 and 34: " << y << endl;
  cout << "Binary conversion of 128: " << z << endl;

  return 0;
}
