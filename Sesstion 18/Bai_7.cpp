#include <stdio.h>
#include <stdlib.h>
void sort(int *arr, int n){
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n - i - 1; j++){
			if (*(arr + j) > *(arr + j + 1)){
				int temp = *(arr + j + 1);
				*(arr + j + 1) = *(arr + j);
				*(arr + j) = temp;
			}
		}
	}
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
	printf("Mang truoc khi sap xep: ");
	for (int i = 0; i < n; i++){
		printf("%d ", *(number + i));
	}
	sort(number, n);
	printf("Mang sau khi sap xep: ");
	for (int i = 0; i < n; i++){
		printf("%d ", *(number + i));
	}
}
