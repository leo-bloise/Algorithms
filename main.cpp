#include <iostream>
#include <string>
#include "binarySearch.hpp"

int main(int argc, char* argv[]) { 
	int arr[10];
	for (int i = 0; i < 10; i++) {
		arr[i] = i;
	}
	if(binarySearch(arr, 1, 0, 9)) {
		std::cout << "Element 1 found" << std::endl;
	} else {
		std::cout << "Element 1 not found" << std::endl;
	}
	if(binarySearch(arr, 11, 0, 9)) {
		std::cout << "Element 11 found" << std::endl;
	} else {
		std::cout << "Element 11 not found" << std::endl;
	}	
}
