#include <stdio.h>
#include <stdlib.h>
#define MAX 100
void inputArray(int *a, int *b, int *n){
	do{
		printf("Nhap so phan tu cua mang: ");
		scanf("%d", n);
		if (*n < 0 || *n > MAX){
			printf("\nNhap lai\n");
		}
	}while(*n < 0 || *n > MAX);
	for (int i = 0; i < *n; i++){
		printf("a[%d] = ", i);
		scanf("%d", (a + i));
	}
}
void copyArray(int *src, int *dest, int n){
	for (int i = 0; i < n; i++){
		*(dest + i) = *(src + i);
	}
}
int main(){
	int a[MAX], b[MAX];
	int n;
	inputArray(a, b, &n);
	copyArray(a, b, n);
	printf("\nMang sau khi copy\n");
	for (int i = 0; i < n; i++){
		printf("%d ", *(b + i));
	}
}
