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
    Student listStudents[MAX];
    int n = 5;

    printf("----- Nhap thong tin 5 sinh vien -----\n");
    for (int i = 0; i < n; i++) {
        listStudents[i].id = i + 1;

        printf("\nNhap thong tin sinh vien thu %d:\n", i + 1);
        
        printf("Ho ten: ");
        fflush(stdin);
        fgets(listStudents[i].name, sizeof(listStudents[i].name), stdin);
        listStudents[i].name[strcspn(listStudents[i].name, "\n")] = '\0';

        printf("Tuoi: ");
        scanf("%d", &listStudents[i].age);

        printf("So dien thoai: ");
        fflush(stdin);
        fgets(listStudents[i].phoneNumber, sizeof(listStudents[i].phoneNumber), stdin);
        listStudents[i].phoneNumber[strcspn(listStudents[i].phoneNumber, "\n")] = '\0';
    }

    printf("\n----------------- DANH SACH SINH VIEN -----------------\n");
    printf("%-5s %-25s %-10s %-15s\n", "ID", "Ho Ten", "Tuoi", "So Dien Thoai");
    for (int i = 0; i < n; i++) {
        printf("%-5d %-25s %-10d %-15s\n", listStudents[i].id, listStudents[i].name, listStudents[i].age, listStudents[i].phoneNumber);
    }
}
