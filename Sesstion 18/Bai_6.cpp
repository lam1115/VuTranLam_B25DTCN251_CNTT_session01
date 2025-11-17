#include <stdio.h>
#include <stdlib.h>
int search(int *arr, int n, int value){
	for (int i = 0; i < n; i++){
		if (*(arr + i) == value){
			return i;
		}
	}
	return -1;	
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
	int x;
	printf("Nhap gia tri can tim: ");
	scanf("%d", &x);
	int check = search(number, n, x);
	if (check != -1){
		printf("%d", check);
	}else{
		printf("Khong tim thay gia tri");
	}
}
