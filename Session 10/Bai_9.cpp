#include <stdio.h>
int main() {
    int n, id;
    int arr[100]; 
    printf("Nhap so luong san pham: ");
    scanf("%d", &n);
    printf("Nhap gia cua tung san pham:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Nhap ma san pham can tim (index): ");
    scanf("%d", &id);
    if (id >= 0 && id < n) {
        printf("Gia cua san pham voi ma ID %d: %d\n", id + 1, arr[id]);
    } else {
        printf("Ma san pham khong hop le.\n");
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Danh sach gia san pham sau khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
