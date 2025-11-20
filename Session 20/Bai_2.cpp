#include <stdio.h>
#include <stdlib.h>

struct Student{
	char Name[50];
	int age;
	char phoneNumber[11];
};
int main(){
	struct Student Student;
	printf("Enter name Student: ");
	fgets(Student.Name, sizeof(Student.Name),stdin);
	printf("Enter age Student: ");
	scanf("%d", &Student.age);
	fflush(stdin);
	printf("Enter phoneNumber: ");
	fgets(Student.phoneNumber, sizeof(Student.phoneNumber), stdin);
	
	printf("Ho ten: %s", Student.Name);
	printf("Tuoi: %d", Student.age);
	printf("\nSdt: %s", Student.phoneNumber);
}
