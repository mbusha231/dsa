#include <stdio.h>
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        int t = arr[i];
        arr[i] = arr[min];
        arr[min] = t;
    }
}
int main() {
    int arr[] = {20, 52, 1, 0, 26};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

