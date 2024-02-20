#include <iostream>

int main() {
  using namespace std;

  //Initializing an Array
  int myArray[5] = {1, 5, 8, 2};

  //Calculating Size of Array
  cout << "Size of Array: " << sizeof(myArray)/sizeof(int) << endl;

  //Changing the values in Arrays
  myArray[0] = 9;
  //Adding Values to Arrays - Only within the limit set
  myArray[4] = 3;

  //Printing out the Array
  cout << "myArray[5] = {";
  for(int i = 0; i < sizeof(myArray)/sizeof(int); i++) {
    cout << myArray[i];
    if(i != 4) {
      cout << ", ";
    }
  }
  cout << "}" << endl;

  return 0;
}
