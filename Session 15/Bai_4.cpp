#include <stdio.h>
int inputNumber(int maxElement){
	int n;
	do{
		printf("Nhap so nguyen: ");
		scanf("%d", &n);
		if (n < 0 || n > maxElement){
			printf("\nNhap lai");
		}
	}while(n < 0 || n > maxElement);
	return n;
}	
void inputArray(int n, int arr[]){
	for (int i = 0; i < n; i++){
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}
void sum(int arr[], int n){
	int sum = 0; 
	for (int i = 0; i < n; i++){
		sum += arr[i];
	}
	printf("Tong cac phan tu trong mang: %d", sum);
}
int main(){
	const int max = 100;
	int arr[max];
	int n = inputNumber(max);
	inputArray(n, arr);
	sum(arr, n);
}  
