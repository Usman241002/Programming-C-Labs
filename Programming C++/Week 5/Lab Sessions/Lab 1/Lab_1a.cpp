#include <iostream>

int factorial(int num) {
  if(num != 1){
    return num * factorial(num - 1);
  } else {
    return num;
  }
}

int main() {
  using namespace std;

  cout << factorial(6) << endl;

  return 0;
}
