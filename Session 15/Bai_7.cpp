#include <stdio.h>
int inputNumber(int maxElement){
	int n;
	do{
		printf("Nhap so phan tu cua mang: ");
		scanf("%d", &n);
		if (n < 0 || n > maxElement ){
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
int BinarySearch(int n, int arr[]){
	int value;
	int found = 0;
	printf("Nhap gia tri can tim: ");
	scanf("%d", &value);
	int left = 0, right = n - 1;
	printf("Gia tri %d xuat hien tai vi tri: ", value);
	while(left <= right){
		int mid = (left + right)/2;
		if (arr[mid] == value){
			printf("%d", mid);
			found = 1;
			break;
		}else if (arr[mid] < value){
			left = mid + 1;
		}else{
			right = mid - 1;
		}
	}
	if (!found){
		return -1;
	}
}
int main(){
	const int max = 100;
	int n;
	int arr[max];
	n = inputNumber(max);
	inputArray(n, arr);
	BinarySearch(n, arr);
}

