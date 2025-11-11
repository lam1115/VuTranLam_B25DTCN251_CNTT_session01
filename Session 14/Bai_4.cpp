#include <stdio.h>
void printarr(int n, int arr[]){
	printf("Cac phan tu trong mang: ");
	for(int i = 0; i < n; i++){
		printf("%d  ", arr[i]);
	}
}
int main(){
	int n;
	int arr[100];
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	printarr(n, arr);
}
