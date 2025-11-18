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
		printf("arr[%d] = ", i);
		scanf("%d", (arr + i));
	}
}
void countEvenOdd(int *arr, int n, int *even, int *odd){
	*even = 0;
	*odd = 0;
	for (int i = 0; i < n; i++){
		if (*(arr + i) % 2 == 0){
			*even = *even + 1;
		}else{
			*odd = *odd + 1;
		}
	}
}
int main(){
	int arr[MAX];
	int n;
	int even, odd;
	inputArray(arr, &n);
	countEvenOdd(arr, n, &even, &odd);
	printf("\nSo phan tu chan cua mang la: %d", even);
	printf("\nSo phan tu le cua mang la: %d", odd);
}
