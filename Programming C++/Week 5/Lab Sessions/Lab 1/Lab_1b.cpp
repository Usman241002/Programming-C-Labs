#include <iostream>

float Ctof (float c) {
  float f = ((c * (9.0/5.0)) + 32);
  return f;
}

float FtoC (float f) {
  float c = (f - 32) * (5.0/9.0);
  return c;
}

int main() {
  using namespace std;

  float Celcius, Fahrenheit;

  cout << "Enter a Celcius to be converted into Fahrenheit: ";
  cin >> Celcius;
  cout << Celcius << "C -> " << Ctof(Celcius) << "F" << endl;

  cout << "Enter a Fahrenheit to be converted into Fahrenheit: ";
  cin >> Fahrenheit;
  cout << Fahrenheit << "F -> " << FtoC(Fahrenheit) << "C" << endl;

  return 0;
}
