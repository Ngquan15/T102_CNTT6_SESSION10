#include <stdio.h>

int main() {
    int array[100];
    int inputNumber;
    int n = 0;

    do {
        printf("\n--- QUAN LY DANH SACH SO NGUYEN ---\n");
        printf("1. Them phan tu vao vi tri bat ki\n");
        printf("2. Xoa phan tu o vi tri bat ki\n");
        printf("3. Cap nhat gia tri tai vi tri bat ki\n");
        printf("4. Tim kiem phan tu trong mang\n");
        printf("5. Hien thi mang\n");
        printf("6. Sap xep mang (Bubble Sort)\n");
        printf("7. Thoat chuong trinh\n");
        printf("Chon chuc nang: ");
        scanf("%d", &inputNumber);

        switch (inputNumber) {
            case 1: {
                int value, pos;
                printf("Nhap gia tri can them: ");
                scanf("%d", &value);
                printf("Nhap vi tri (0 -> %d): ", n);
                scanf("%d", &pos);
                if (pos < 0 || pos > n) {
                    printf("Vi tri khong hop le!\n");
                } else {
                    for (int i = n; i > pos; i--) {
                        array[i] = array[i - 1];
                    }
                    array[pos] = value;
                    n++;
                }
                break;
            }

            case 2: {
                int pos;
                printf("Nhap vi tri can xoa (0 -> %d): ", n - 1);
                scanf("%d", &pos);
                if (pos < 0 || pos >= n) {
                    printf("Vi tri khong hop le!\n");
                } else {
                    for (int i = pos; i < n - 1; i++) {
                        array[i] = array[i + 1];
                    }
                    n--;
                }
                break;
            }

            case 3: {
                int pos, value;
                printf("Nhap vi tri can cap nhat (0 -> %d): ", n - 1);
                scanf("%d", &pos);
                if (pos < 0 || pos >= n) {
                    printf("Vi tri khong hop le!\n");
                } else {
                    printf("Nhap gia tri moi: ");
                    scanf("%d", &value);
                    array[pos] = value;
                }
                break;
            }

            case 4: {
                int value, found = 0;
                printf("Nhap gia tri can tim: ");
                scanf("%d", &value);
                for (int i = 0; i < n; i++) {
                    if (array[i] == value) {
                        printf("Tim thay tai vi tri %d\n", i);
                        found = 1;
                    }
                }
                if (!found) {
                    printf("Khong tim thay!\n");
                }
                break;
            }

            case 5:
                printf("Mang hien tai:\n");
                for (int i = 0; i < n; i++) {
                    printf("array[%d] = %d\n", i, array[i]);
                }
                break;

            case 6: {
                for (int i = 0; i < n - 1; i++) {
                    for (int j = 0; j < n - 1 - i; j++) {
                        if (array[j] > array[j + 1]) {
                            int temp = array[j];
                            array[j] = array[j + 1];
                            array[j + 1] = temp;
                        }
                    }
                }
                printf("Mang da duoc sap xep tang dan.\n");
                break;
            }

            case 7:
                printf("Thoat chuong trinh.\n");
                break;

            default:
                printf("Lua chon khong hop le. Vui long thu lai.\n");
                break;
        }

    } while (inputNumber != 7);

    return 0;
}