#include "problems/twoCrystalBalls.hpp"
#include <iostream>

int main(int argc, char* argv[]) { 
	bool breaks[] = {false, false, false, false, false, false, false, false, false, true, true, true}; 
	int size = sizeof(breaks) / sizeof(breaks[0]);
	std::cout << "Size of array: " << size << std::endl;
	int index = twoCrystalBalls(breaks, size);
	std::cout << "Must break at: " << index << std::endl;
}
