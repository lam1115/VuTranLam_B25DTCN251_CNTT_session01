#include <stdio.h>
#include <string.h>
#define MAX 50

typedef struct listStudent{
    int id;
    char name[50];
    int age;
    char phoneNumber[11];
}Student;

int main() {
    Student listStudent[MAX] = {
        {1, "Nguyen Van A", 18, "0123456789"},
        {2, "Nguyen Van B", 18, "0987654321"},
        {3, "Nguyen Van C", 19, "0192837465"},
        {4, "Nguyen Van D", 19, "0246813579"},
        {5, "Nguyen Van E", 20, "0123498765"}
    };
    int n = 5;
	printf("\n---------------DANH SACH SINH VIEN ---------------\n");
    printf("%-5s %-25s %-10s %-15s\n", "ID", "Ho Ten", "Tuoi", "So Dien Thoai");
    for (int i = 0; i < n; i++) {
        printf("%-5d %-25s %-10d %-15s\n", listStudent[i].id, listStudent[i].name, listStudent[i].age, listStudent[i].phoneNumber);
    }
    int deleteId;
    printf("Nhap ID sinh vien can xoa: ");
    scanf("%d", &deleteId);

    int found = 0;
    for (int i = 0; i < n; i++) {
        if (listStudent[i].id == deleteId) {
            found = 1;
            for (int j = i; j < n - 1; j++) {
                listStudent[j] = listStudent[j + 1];
            }
            n--;
            break;
        }
    }

    if (!found) {
        printf("\nKhong tim thay sinh vien co ID = %d\n", deleteId);
    }else{
	    printf("\n---------------DANH SACH SINH VIEN SAU KHI XOA----------------\n");
		printf("%-5s %-25s %-10s %-15s\n", "ID", "Ho Ten", "Tuoi", "So Dien Thoai");
		for (int i = 0; i < n; i++) {
			printf("%-5d %-25s %-10d %-15s\n", listStudent[i].id, listStudent[i].name, listStudent[i].age, listStudent[i].phoneNumber);
		}
	}
}
