#include <stdio.h>
#include <string.h>
struct Student{
	char name[50];
	int age;
	char phoneNumber[11];
};

int main(){
	struct Student Student = {"Vu Tran Lam", 18, "0123456789"};
	printf("Ho ten: %s\n", Student.name);
	printf("Tuoi: %d\n", Student.age);
	printf("Sdt: %s\n", Student.phoneNumber);
}
