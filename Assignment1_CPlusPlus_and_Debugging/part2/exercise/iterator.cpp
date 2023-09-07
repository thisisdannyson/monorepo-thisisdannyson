// Compile with:
// g++ -std=c++17 iterator.cpp -o prog
#include <iostream>
#include <vector>

using namespace std;

int main(){

  	// Wow you are learning so much already by typing out these examples.
	//
	// Folks in the C++ world 'swear' by iterators.
	// (And I sort of agree). But in this course, it's enough to just know they exist
	// and you can start building a habit out of using them now.
	vector<unsigned char> myData;

	for (unsigned int i = 65; i < 91; i++) {
		myData.push_back(i);
	}

	vector<unsigned char>::iterator it = myData.begin();

	vector<unsigned char>::iterator end = myData.end();

	for(; it != end; it++) {
		cout << *it << " ";
	}

	return 0;
}
