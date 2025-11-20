#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
typedef struct listStudent{
	char name[50];
	int age;
	char phoneNumber[11];
}Student;
int main(){
	Student listStudent[MAX];
	int n = 0;
	do{
		printf("Nhap so luong hoc sinh: ");
		scanf("%d", &n);
		if (n < 1 || n > MAX){
			printf("\nLoi - Nhap lai\n");
		}
	}while(n < 1 || n > MAX);
	
	for (int i = 0; i < n; i++){
		fflush(stdin);
		printf("Nhap thong tin hoc sinh thu %d: \n", i + 1);
		Student s;
		printf("Ten sinh vien: ");
		fgets(s.name, sizeof(s.name), stdin);
		printf("Tuoi sinh vien: ");
		scanf("%d", &s.age);
		fflush(stdin);
		printf("So dien thoai: ");
		fgets(s.phoneNumber, sizeof(s.phoneNumber), stdin);
		
		listStudent[i] = s;
	}
	printf("\nDanh sach sinh vien vua nhap:\n");
	for (int i = 0; i < n; i++){
		printf("Sinh vien thu %d\n", i + 1);
		printf("Ho ten: %s", listStudent[i].name);
		printf("Tuoi: %d", listStudent[i].age);
		printf("\nSdt: %s", listStudent[i].phoneNumber);
	}
}
