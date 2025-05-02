#include <iostream>
#include <string>
#include "algorithms/binarySearch.h"
#include "utils/assert.hpp"

using std::endl;
using std::cout;

int main(int argc, char* argv[]) { 
	int arr[] = {1, 3, 5, 7, 9, 11, 13, 15};
	int size = sizeof(arr) / sizeof(arr[0]);		
	ASSERT(binarySearch(arr, 1, 0, size - 1) == true, "Test 1: Found at beginning");
	ASSERT(binarySearch(arr, 7, 0, size - 1) == true, "Test 2: Found in middle");
	ASSERT(binarySearch(arr, 15, 0, size - 1) == true, "Test 3: Found at end");
	ASSERT(binarySearch(arr, 4, 0, size - 1) == false, "Test 4: Not found (between values)");
	ASSERT(binarySearch(arr, -10, 0, size - 1) == false, "Test 5: Not found (too small)");
	ASSERT(binarySearch(arr, 100, 0, size - 1) == false, "Test 6: Not found (too large)");
	ASSERT(binarySearch(arr, 13, 0, size - 1) == true, "Test 7: Found 13");
	ASSERT(binarySearch(arr, 11, 0, size - 1) == true, "Test 8: Found 11");
	ASSERT(binarySearch(arr, 9, 0, size - 1) == true, "Test 9: Found 9");
	ASSERT(binarySearch(arr, 3, 0, size - 1) == true, "Test 10: Found 3");
	ASSERT(binarySearch(arr, 5, 0, size - 1) == true, "Test 11: Found 5");

	int singleElement[] = {5};
	ASSERT(binarySearch(singleElement, 5, 0, 0) == true, "Test 12: Single element, match");
	ASSERT(binarySearch(singleElement, 3, 0, 0) == false, "Test 13: Single element, no match");

	int emptyArray[] = {};
	ASSERT(binarySearch(emptyArray, 1, 0, -1) == false, "Test 14: Empty array");
}
