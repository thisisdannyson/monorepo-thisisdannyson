// g++ -std=c++17 vector_data.cpp -o prog
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv){

  // Making you type out this example because
  // it will come in handy...
  //
  // In fact, for all these examples I picked out a 
  // minimum subset of C++ that'll get you through
  // the course.

    vector<int> myData;

    for (int i = 0; i < 20; i++) {
      myData.push_back(i);
    }

    int* internalArray = myData.data();

    for (int i = 0; i < myData.size(); i++) {
      cout << internalArray[i] << endl;
    }

    return 0;
}
