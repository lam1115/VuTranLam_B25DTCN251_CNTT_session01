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
    if (n >= MAX) {
        printf("Mang da day. Khong the them sinh vien moi.\n");
    }

    int insertStudent;
    printf("Nhap vi tri can chen (0 den %d): ", n);
    scanf("%d", &insertStudent);

    if (insertStudent < 0 || insertStudent > n) {
        printf("Vi tri chen khong hop le.\n");
    }

    Student newStudent;
    newStudent.id = n + 1;

    fflush(stdin);
    printf("Nhap ho ten sinh vien moi: ");
    fgets(newStudent.name, sizeof(newStudent.name), stdin);
    newStudent.name[strcspn(newStudent.name, "\n")] = '\0';

    printf("Nhap tuoi: ");
    scanf("%d", &newStudent.age);

    fflush(stdin);
    printf("Nhap so dien thoai: ");
    fgets(newStudent.phoneNumber, sizeof(newStudent.phoneNumber), stdin);
    newStudent.phoneNumber[strcspn(newStudent.phoneNumber, "\n")] = '\0';

    for (int i = n; i > insertStudent; i--) {
        listStudent[i] = listStudent[i - 1];
    }

    listStudent[insertStudent] = newStudent;
    n++;

    printf("\n=== DANH SACH SINH VIEN SAU KHI CHEN ===\n");
    printf("%-5s %-25s %-10s %-15s\n", "ID", "Ho Ten", "Tuoi", "So Dien Thoai");
    for (int i = 0; i < n; i++) {
        printf("%-5d %-25s %-10d %-15s\n", listStudent[i].id, listStudent[i].name, listStudent[i].age, listStudent[i].phoneNumber);
    }
}
