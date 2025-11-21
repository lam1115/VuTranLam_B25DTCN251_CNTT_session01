#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Product{
	char name[50];
	float price;
	int quantity;
};

int main(){
	float sum;
	struct Product Product[5];
	printf("Nhap gia san pham\n");
	for (int i = 0; i < 5; i++){
		printf("San pham thu %d\n", i + 1);
		printf("Ten san pham: ");
		fgets(Product[i].name, sizeof(Product[i].name),stdin);
		Product[i].name[strcspn(Product[i].name, "\n")] = '\0';
		printf("Gia san pham: ");
		scanf("%f", &Product[i].price);
		printf("So luong san pham: ");
		scanf("%d", &Product[i].quantity);
		fflush(stdin);
	}
	for (int i = 0; i < 5; i++){
		sum = Product[i].price * Product[i].quantity;
		printf("Gia san pham %d: %f\n", i + 1, sum);
	}
}
