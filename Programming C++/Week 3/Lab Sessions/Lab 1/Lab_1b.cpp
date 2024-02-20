#include <iostream>
#include <vector>

int main() {
  using namespace std;

  //Initializing an Vector
  vector<int> myVector = {4, 6, 3, 5, 9, 2};

  //Calculating Size of Vector
  cout << myVector.size() << "\n\n";

  //Changing the values in Vectors
  myVector[3] = 7;
  //Adding Values to Vectors
  myVector.push_back(1);

  for(int i = 0; i < myVector.size(); i++){
    cout << "myVector[" << i << "] =  " << myVector[i] << endl;
  }


  return 0;
}
