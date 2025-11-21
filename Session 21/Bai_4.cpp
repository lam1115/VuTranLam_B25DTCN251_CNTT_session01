#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct book{
	char title[100];
	char author[50];
	float price;
};

int main(){
	struct book Book1[3];
	for (int i = 0; i < 3; i++){
		printf("Nhap thong tin cuon sach thu %d\n", i + 1);
		printf("Ten sach: ");
		fgets(Book1[i].title, sizeof(Book1[i].title), stdin);
		Book1[i].title[strcspn(Book1[i].title, "\n")] = '\0';
		printf("Ten tac gia: ");
		fgets(Book1[i].author, sizeof(Book1[i].author), stdin);
		Book1[i].author[strcspn(Book1[i].author, "\n")] = '\0';
		printf("Gia sach: ");
		scanf("%f", &Book1[i].price);
		fflush(stdin);
	}
	for (int i = 0; i < 3; i++){
		printf("Cuon thu %d", i + 1);
		printf("Ten sach: %s - (%s) - Gia: %.2f\n", Book1[i].title, Book1[i].author, Book1[i].price);
	}
}
