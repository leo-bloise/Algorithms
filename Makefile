all:
	make main
clear:
	rm -rf main.out
	rm -rf ./**/*.o
binarySearch.o: algorithms/binarySearch.cpp
	g++ -c ./algorithms/binarySearch.cpp -o ./algorithms/binarySearch.o
bubbleSort.o: algorithms/bubbleSort.cpp
    g++ -c ./algorithms/bubbleSort.cpp -o ./algorithms/bubbleSort.o
main: bubbleSort.o main.cpp
	g++ ./main.cpp ./algorithms/bubbleSort.o -o main.out
