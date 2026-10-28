#include <stdio.h>

void merge(int a[], int low, int mid, int high) {
    int h = low, i = 0, j = mid + 1;
    int b[high - low + 1];

    while (h <= mid && j <= high) {
        if (a[h] <= a[j]) {
            b[i++] = a[h++];
        } else {
            b[i++] = a[j++];
        }
    }
    while (j <= high) {
        b[i++] = a[j++];
    }
    while (h <= mid) {
        b[i++] = a[h++];
    }
    for (int k = 0; k < high - low + 1; k++) {
        a[low + k] = b[k];
    }
}
void mergesort(int a[], int low, int high) {
    if (low < high) {
        int mid = low + (high - low) / 2;
        mergesort(a, low, mid);
        mergesort(a, mid + 1, high);
        merge(a, low, mid, high);
    }
}
int main() {
    int arr[] = {20, 52, 1, 0, 26};
    int n = sizeof(arr) / sizeof(arr[0]);
    mergesort(arr, 0, n - 1);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

