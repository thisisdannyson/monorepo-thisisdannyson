// Compile with:
// g++ -std=c++17 string.cpp -o prog
#include <iostream>
#include <string>
using namespace std;

int main() {

  // Type out the example.
  // We'll work with std::strings a lot to parse and manipulate data.
  string fullName = "Danny Son";

  string firstName = fullName.substr(0,5);
  string lastName = fullName.substr(6);

  cout << "First: " << firstName << endl;
  cout << "Last: " << lastName << endl;

  unsigned int i = 0;
  while (i < fullName.length()) {
    if (fullName.at(i) == ' ') {
      break;
    } else {
      cout << fullName[i];
      i++;
    }
  }

	return 0;
}
