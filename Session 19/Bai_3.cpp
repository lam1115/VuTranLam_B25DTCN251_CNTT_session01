#include <stdio.h>
#include <stdlib.h>
#define MAX 100
void inputArray(int *arr, int *n){
	do{
		printf("Nhap so phan tu cua mang: ");
		scanf("%d", n);
		if (*n < 1 || *n > MAX){
			printf("\nNhap lai\n");
		}
	}while(*n < 1 || *n > MAX);
	for (int i = 0; i < *n; i++){
		printf("arr[%d] = ",i);
		scanf("%d", (arr + i));
	}
}

void average(int *arr, int n){
	float sum = 0;
	for (int i = 0; i < n; i++){
		sum = sum + *(arr + i);
	}
	printf("Gia tri trung binh cua mang: %.2f", sum/n);
}
int main(){
	int arr[MAX];
	int n;
	inputArray(arr, &n);
	average(arr, n);
}
