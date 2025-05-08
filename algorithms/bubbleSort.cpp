void bubbleSort(int* arr, int l, int r) {
    int swaps;
    do {
        swaps = 0;
        while (l < r - 1) {
            if (arr[l] > arr[l + 1]) {
                int t = arr[l + 1];
                arr[l + 1] = arr[l];
                arr[l] = t;
                swaps++;
            }
            l++;
        }
        r--;
        l = 0;
    } while(swaps > 0);
}
