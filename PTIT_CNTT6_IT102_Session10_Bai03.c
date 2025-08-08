#include <stdio.h>

int main() {
    int arr[] = {12, 5, 23, 7, 42, 15};
    int length = sizeof(arr) / sizeof(arr[0]);

    for (int i = 1; i < length; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    printf("Mang sau khi sap xep tang dan:\n");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}