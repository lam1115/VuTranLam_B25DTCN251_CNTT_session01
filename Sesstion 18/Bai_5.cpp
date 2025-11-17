#include <stdio.h>
#include <stdlib.h>
void updateElement(int *arr, int newValue, int index){
	*(arr + index) = newValue;
}
int main(){
	int n;
	int number[100];
	do{
		printf("Nhap so phan tu cua mang: ");
		scanf("%d", &n);
		if (n < 0 || n > 100){
			printf("\nNhap lai\n");
		}
	}while(n < 0 || n > 100);
	for(int i = 0; i < n; i++){
		printf("number %d = ", i);
		scanf("%d", number + i);
	}
	printf("Mang truoc cap nhat: ");
	for (int i = 0; i < n; i++){
		printf("%d ", *(number + i));
	}
	printf("\n");
	updateElement(number, 99, 2);
	printf("Mang sau cap nhat: ");
	for (int i = 0; i < n; i++){
		printf("%d ", *(number + i));
	}
}

