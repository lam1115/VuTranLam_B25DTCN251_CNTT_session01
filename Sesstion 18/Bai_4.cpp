#include <stdio.h>
#include <stdlib.h>
int main(){
	int n;
	int arr[100];
	do{
		printf("Nhap so phan tu cua mang: ");
		scanf("%d", &n);
		if (n < 0 || n > 100){
			printf("\nNhap lai\n");
		}
	}while(n < 0 || n > 100);
	for(int i = 0; i < n; i++){
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	int *Ptr = arr;
	for (int i = 0; i < n; i++){
		printf("%d ", *(Ptr + i));
	}
}
