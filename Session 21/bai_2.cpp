#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

struct Student{
	char name[50];
	int age;
	float grade;
};
int main(){
	int n;
	printf("Nhap so hoc sinh: ");
	scanf("%d", &n);
	fflush(stdin);
	struct Student Student1;
	for (int i = 0; i < n; i++){
	printf("Nhap thong tin hoc sinh:\n");
	printf("Nhap ten: ");
	fgets(Student1.name, sizeof(Student1.name), stdin);
	Student1.name[strcspn(Student1.name, "\n")] = '\0';
	printf("Nhap tuoi: ");
	scanf("%d", &Student1.age);
	printf("Nhap diem: ");
	scanf("%f", &Student1.grade);
	}
	
	for (int i = 0; i < n; i++){
		printf("%s - %d - %.2f", Student1.name, Student1.age, Student1.grade);
	}
}
