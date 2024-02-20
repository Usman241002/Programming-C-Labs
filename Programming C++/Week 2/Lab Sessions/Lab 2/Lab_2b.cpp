#include <iostream>
#include <cmath>

int main() {
  using namespace std;

  float power = pow(8, 4);
  cout << "8 to the power of 4 is: " << power << endl;

  float sumAndMultiply = (5 + 6) * pow(9, 3);
  cout << "The sum of  5 and  6, multiplied by the exponent of  9 and  3 is: " << sumAndMultiply << endl;

  int remainder = 87 % 8;
  cout << "The Remainder of 87 / 8 is: " << remainder << endl;

  return 0;
}
