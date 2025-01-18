#include <stdio.h>

void selectionSort(int arr[], int n, int ascending) {
    for (int i = 0; i < n - 1; i++) {
        int key = i;
        for (int j = i + 1; j < n; j++) {
            if ((ascending && arr[j] < arr[key]) || (!ascending && arr[j] > arr[key])) {
                key = j;
            }
        }
        if (key != i) {
            int temp = arr[i];
            arr[i] = arr[key];
            arr[key] = temp;
        }
    }
}


void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    printArray(arr, n);

    // Sort in ascending order
    selectionSort(arr, n, 1);
    printf("Array sorted in ascending order:\n");
    printArray(arr, n);

    // Sort in descending order
    selectionSort(arr, n, 0);
    printf("Array sorted in descending order:\n");
    printArray(arr, n);

    return 0;
}

