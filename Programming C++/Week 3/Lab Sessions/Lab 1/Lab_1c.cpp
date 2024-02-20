#include <iostream>
#include <map>

int main() {
  using namespace std;

  map<int, string> myMap = {{0, "Alpha"}, {1, "Beta"}, {2, "Theta"}};

  cout << myMap[0] << endl;
  cout << myMap.at(1) << endl;
  return 0;
}
