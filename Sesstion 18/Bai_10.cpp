#include <stdio.h>
#include <stdlib.h>
void deleteElement(int *arr, int *size, int index) {
    if (index < 0 || index >= *size) {
        printf("Vi tri khong hop le!\n");
    }
    for (int i = index; i < *size - 1; i++) {
        *(arr + i) = *(arr + i + 1); 
    }
    (*size) --;
}
int main() {
    int numbers[100];
    int n;
    do {
        printf("Nhap so phan tu cua mang: ");
        scanf("%d", &n);
        if (n <= 0 || n > 100) {
            printf("Nhap lai\n");
        }
    } while (n <= 0 || n > 100);
    for (int i = 0; i < n; i++) {
        printf("numbers[%d] = ", i);
        scanf("%d", numbers + i);
    }
    printf("Mang ban dau:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(numbers + i));
    }
    int pos;
    printf("\nNhap vi tri can xoa (0 den %d): ", n - 1);
    scanf("%d", &pos);
    deleteElement(numbers, &n, pos);
    printf("\nMang sau khi xoa:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(numbers + i));
    }
}
