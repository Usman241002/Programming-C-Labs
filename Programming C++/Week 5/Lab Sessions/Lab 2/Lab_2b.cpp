#include <iostream>
#include <vector>

int main() {
  using namespace std;
  vector<int> nums;
  int i;


  for(i = 0; i <= 10; i++) {
    if (i == 4 || i == 7) {
      continue;
    } else {
      nums.push_back(i);
    }
  }

  for(i = 0; i < nums.size(); i++) {
    cout << "nums[" << i << "] = " << nums[i] << endl;
  }

  return 0;
}
