#include <stdio.h>
int inputNumber(int maxElement){
	int n;
	do{
		printf("Nhap so phan tu: ");
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
void BubbleSort(int n, int arr[]){
	for (int i = 0; i < n - 1; i++){
		for (int j = 0; j < n - i - 1; j++){
			if (arr[j] > arr[j + 1]){
				int temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("Mang tang dan: ");
	for (int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
}
int main(){
	const int max = 100;
	int n;
	int arr[max];
	n = inputNumber(max);
	inputArray(n, arr);
	BubbleSort(n, arr);
	
}

