#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
	char name[50];
	int age;
	float grade;
};
void linearsearch(Student Student[]){
	char keyword[50];
	fflush(stdin);
	printf("Nhap ten hoc sinh can tim: ");
	fgets(keyword, sizeof(keyword), stdin);
	keyword[strcspn(keyword, "\n")] = '\0';
	
	int found = 0;
	for (int i = 0; i < 5; i ++){
		if (strcmp(Student[i].name, keyword) == 0){
			printf("Tim thay: \nTen: %s\nTuoi: %d\nDiem tung binh: %.2f\n", Student[i].name, Student[i].age,Student[i].grade);
			found = 1;
		}
	}
	if (!found){
		printf("Khong tim thay hoc sinh\n");
	}
}
int main(){
	struct Student Student[5];
	printf("Nhap thong tin hoc sinh\n");
	for (int i = 0; i < 5; i++){
		printf("Hoc sinh thu %d\n",i + 1);
		printf("Ten hoc sinh: ");
		fgets(Student[i].name, sizeof(Student[i].name), stdin);
		Student[i].name[strcspn(Student[i].name, "\n")] = '\0';
		printf("Nhap tuoi: ");
		scanf("%d", &Student[i].age);
		fflush(stdin);
		printf("Nhap diem trung binh: ");
		scanf("%f", &Student[i].grade);
		fflush(stdin);
	}
	linearsearch(Student);
}
