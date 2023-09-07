// Compile with:
// g++ -std=c++17 output.cpp -o prog
#include <iostream>
#include <fstream>

using namespace std;

int main(){

  // I hope you are typing out the examples and experimenting.
  ofstream outFile;

  outFile.open("testing.txt");

  outFile << "# image data" << endl; 
  for (int i = 0; i < 255; i++) {
    outFile << i << " " << i << " " << i << endl;
  }

  outFile.close();

	return 0;
}
