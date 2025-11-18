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
int findMax(int *arr, int n){
	int max = *(arr + 0);
	for (int i = 1; i < n; i++){
		if (max < *(arr + i)){
			max = *(arr + i); 
		}
	}
	return max;
}
int main(){
	int arr[MAX];
	int n;
	inputArray(arr, &n);
	int max = findMax(arr, n);
	printf("Phan tu lon nhat cua mang la: %d",max);
}
