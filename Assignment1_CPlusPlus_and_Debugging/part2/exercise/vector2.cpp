// g++ -std=c++17 vector2.cpp -o prog
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv){

  // You need to understand what is going on with sizeof.
  // This exercise exists because on average, 25% of folks
  // are going to try to use 'sizeof' and expect to get the number
  // of elements in a vector, rather than the size of the underlying data type.

    vector<unsigned char> myVector;

    for(unsigned int i =0; i < 91; i++) {
      myVector.push_back(i);
    }

    cout << "(number of elements) myVector.size() = " << myVector.size() << endl;
    cout << "(size of data structure) sizeof(myVector) = " << sizeof(myVector) << endl;
    cout << "(raw array myVector  is built on top of) sizeof(myVector.data())= " << sizeof(myVector.data()) << endl;
    cout << endl;

    int rawArray[100];
    cout << "locally allocated, i.e. stack allocated array) sizeof(rawArray) = " << sizeof(rawArray) << endl;
    cout << endl;

    int* heapArray = new int[52];

    cout << "heap allocated array, (i.e. pointer to a chunk of memory) sizeof(heapArray) = " << sizeof(heapArray) << endl;
    cout << endl;
    delete[] heapArray;

    return 0;
}
