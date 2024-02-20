  #include <iostream>

  std::string reversal(std::string theString) {
    int i = 0, n = theString.length();
    std::string newString(n, ' ');    //creates an empty string with a set size

    for(i; i < n; i++){
      newString[i] = theString[n - 1 - i];
    }

    return newString;
  }

  int main() {
    using namespace std;

    string myString = "Hello";

    cout << reversal(myString);

    return 0;
  }
