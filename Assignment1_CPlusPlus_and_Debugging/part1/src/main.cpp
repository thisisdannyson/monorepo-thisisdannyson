// Files that end in the .cpp extension are 'C++' files

// Bring in libraries here
#include <iostream> // input and output 'stream' library
#include <vector>  // std::vector data structure.


void PrintVector(const std::vector<int>& v) {
	std::cout<< "PrintVector" << std::endl;
	for (int i = 0; i < v.size(); i++) {
		std::cout << v.at(i) << std::endl;
	}
}

void PrintRawArray(int array[], int size) {
	std::cout<< "PrintRawArray" << std::endl;
	for (int i =0; i < size; i++) {
		std::cout << array[i] << std::endl;
	}
}

int main(){
	
	// Source code here
	std::cout << "hello my name is Danny" << std::endl;

	std::vector<int> myVector;
	myVector.push_back(1);
	myVector.push_back(2);
	myVector.push_back(3);

	int array[3] = {2,3,4};
	

	PrintVector(myVector);
	PrintRawArray(myVector.data(), myVector.size());
	return 0;
}
