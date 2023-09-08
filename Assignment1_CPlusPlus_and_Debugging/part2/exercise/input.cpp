// Compile with:
// g++ -std=c++17 input.cpp -o prog
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char** argv){

  // Learning how to read in values will be useful for the course.
  ifstream inFile;

  if (argc != 2) {
    cerr << "need two arguments to run this program.\n";
    cerr << "programName file_path.\n";
    return 0;
  }

  inFile.open(argv[1]);
  if(inFile.is_open()) {
    string line;
    while (getline(inFile, line)) {
      cout << line << endl;
    }
  } else {
    cout << "filepath does not exist" << argv[1] << endl;
    cout << "make sure path is relative to where you are executing your program" << endl;
  }

  inFile.close();

	return 0;
}
