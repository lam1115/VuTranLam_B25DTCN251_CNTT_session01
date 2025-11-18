#include <stdio.h>
#include <stdlib.h>
#define MAX 100
void inputArray(int *a, int *b, int *n){
	do{
		printf("Nhap so phan tu cua mang: ");
		scanf("%d", n);
		if (*n < 1 || *n > MAX){
			printf("\nNhap lai\n");
		}
	}while(*n < 1 || *n > MAX);
	printf("Nhap mang a:\n");
	for (int i = 0; i < *n; i ++){
		printf("a[%d] = ", i);
		scanf("%d", (a + i));
	}
	printf("Nhap mang b:\n");
	for (int i = 0; i < *n; i ++){
		printf("b[%d] = ", i);
		scanf("%d", (b + i));
	}
}
int compareArrays(int *a, int *b, int n){
	for (int i = 0; i < n; i++){
		if (*(a + i) != *(b + i)){
			return 0;
		}
	}
	return 1;
}
int main(){
	int a[MAX];
	int b[MAX];
	int n;
	inputArray(a, b, &n);
	int result = compareArrays(a, b, n);
	if (result == 0){
		printf("Hai mang a va b khac nhau");
	}else{
		printf("Hai mang a va b giong nhau");
	}
}
