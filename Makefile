all:
	make binarySearch
clear:
	rm binarySearch
binarySearch: binarySearch.cpp main.cpp
	g++ -c ./binarySearch.cpp
	g++ main.cpp binarySearch.o -o binarySearch
	rm *.o	
	./binarySearch