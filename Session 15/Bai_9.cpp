#include <stdio.h>
int inputTotalElement(int maxElement){
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
int countMinDispayElement(int arr[],int n, int value){
	int count = 0;
	for (int i = 0; i < n; i++){
		if (arr[i] == value){
			count ++;
		}
	}
	return count;
}
int findMinDisplayElement(int n, int arr[]){
	int minEle = n + 1;
	int minVal;
	for (int i = 0; i < n; i++){
		int temp = countMinDispayElement(arr, n, arr[i]);
		if (temp < minEle){
			minEle = temp;
			minVal = arr[i];
		}
	}
	return minVal;
}
int main(){
	const int max = 100;
	int n;
	int arr[max];
	n = inputTotalElement(max);
	inputArray(n, arr);
	int value = findMinDisplayElement(n, arr);
	printf("Phan tu xuat hien it nhat la: %d", value);
}

