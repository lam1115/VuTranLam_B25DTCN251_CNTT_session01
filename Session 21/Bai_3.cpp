#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Address{
	char street[100];
	char city[50];
	int zip;
};
struct Person{
	char name[50];
	int age;
	struct Address Address;
};
int main(){
	struct Person Person1;
	
	printf("Nhap thong tin nguoi dung:\n");
	printf("Nhap ten: ");
	fgets(Person1.name, sizeof(Person1.name), stdin);
	Person1.name[strcspn(Person1.name, "\n")] = '\0';
	printf("Nhap tuoi: ");
	scanf("%d", &Person1.age);
	fflush(stdin);
	printf("Nhap ten duong: ");
	fgets(Person1.Address.street, sizeof(Person1.Address.street), stdin);
	Person1.Address.street[strcspn(Person1.Address.street, "\n")] = '\0';
	printf("Nhap ten thanh pho: ");
	fgets(Person1.Address.city, sizeof(Person1.Address.city), stdin);
	Person1.Address.city[strcspn(Person1.Address.city, "\n")] = '\0';
	printf("Nhap ma thanh pho: ");
	scanf("%d", &Person1.Address.zip);
	
	printf("%s - %d - %s - %s - %d", Person1.name, Person1.age, Person1.Address.street,Person1.Address.city, Person1.Address.zip);
}
