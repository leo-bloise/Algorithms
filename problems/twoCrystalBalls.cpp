#include <cmath>
#include <iostream>

/**
 * O(sqrt(n))
 * We are going to jump sqrt(n) elements trying to find an interval where one of the crystal breaks and save the last position where the crystal ball
 * did not break. Then, we'll perform a loop in this interval looking for the exact point where it breaks.
 */
int twoCrystalBalls(bool breaks[], int size) {
    int j = floor(sqrt(size));
    int l = 0;
    int r;
    for(int i = j; i < size; i += j) {
	if(breaks[i]) {
		r = i;
		break;
	}
	l = i;
    }
    while(l < r) {		
	l = l + 1;
	if(breaks[l] == true) {
		return l;
	}
    }
    return r;
}
