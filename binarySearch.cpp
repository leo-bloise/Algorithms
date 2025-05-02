/**
 * O(log n)
 */
bool binarySearch(int* arr, int needle, int l, int r) {
	while (l < r) {
		int m = l + (r - l / 2);
		if (arr[m] == needle) {
			return true;
		}
		if (arr[m] > needle) {
			return binarySearch(arr, needle, l, m - 1);
		}
		return binarySearch(arr, needle, m + 1, r);
	}
	return false;
}