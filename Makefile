all:
	make main
clear:
	rm -rf main.out
	rm -rf ./**/*.o
binarySearch.o: algorithms/binarySearch.cpp
	g++ -c ./algorithms/binarySearch.cpp -o ./algorithms/binarySearch.o
main: binarySearch.o main.cpp
	g++ ./main.cpp ./algorithms/binarySearch.o -o main.out