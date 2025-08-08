#include <stdio.h>

int main() {
    int arr[] = {5, 8, 12, 20, 25};
    int length = sizeof(arr) / sizeof(arr[0]);
    int x, found = 0;

    printf("Nhap phan tu can kiem tra: ");
    scanf("%d", &x);

    for (int i = 0; i < length; i++) {
        if (arr[i] == x) {
            printf("Vi tri phan tu trong mang la %d\n", i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Phan tu khong ton tai trong mang.\n");
    }

    return 0;
}