bool binarySearch(int* arr, int needle, int l, int r) {
	while (l < r) {
		int m = l + (r - l / 2);
		if (arr[m] == needle) {
			return true;
		}
		if (arr[m] > needle) {
            r = m -1;
			continue;
		}
		l = m + 1;
	}
	return false;
}