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
int countValue(int *arr, int n, int x){
	int count = 0;
	for (int i = 0; i < n; i++){
		if (*(arr + i) == x){
			count ++;
		}
	}
	return count;
}
int main(){
	int arr[MAX];
	int n;
	int x, count;
	inputArray(arr, &n);
	printf("Nhap phan tu can tim: ");
	scanf("%d", &x);
	count = countValue(arr, n , x);
	if (count == 0){
		printf("\nPhan tu khong xuar hien trong mang");
	}else{
		printf("Gia tri %d xuat hien %d lan", x, count);
	}
}
