#include <iostream>


int main(int argc, char* argv[]) {
   int arr[] = {3, 2, 1};
   bubbleSort(arr, 0, 3);
   for (int element : arr) {
       std::cout << element << std::endl;
   }
}
