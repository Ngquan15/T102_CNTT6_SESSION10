#include <stdio.h>

int main() {
    int arr[] = {18, 3, 25, 7, 42, 11};
    int length = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < length - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < length; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }

    printf("Mang sau khi sap xep tang dan:\n");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}