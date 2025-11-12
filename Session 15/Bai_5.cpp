#include <stdio.h>
int inputNumber(int maxElement){
	int n;
	do{
		printf("Nhap so phan tu cua mang: ");
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
int countMaxDisplayElement(int arr[], int n){
	int countMax = 0, count;
	for (int i = 0; i < n - 1; i++){
		count = 1;
		for (int j = i + 1; j < n; j++){
			if (arr[j] == arr[i]){
				count ++;
			}
		}
		if (countMax < count){
			countMax = count;
		}
	}
	return countMax;
}
void findMaxDiplayElement(int arr[], int n){
	int max = countMaxDisplayElement(arr, n);
	printf("\nCac phan tu xuat hien nhieu nhat trong mang: ");
	int count;
	for (int i = 0; i < n - 1; i++){
		count = 1;
		for (int j = i + 1; j < n; j++){
			if (arr[j] == arr[i]){
				count ++;
			}
		}
		if (count == max){
			printf("%d ", arr[i]);
		}
	}
	printf("\nCac phan tu xuat hien %d lan trong mang", max);
}
int main(){
	const int max = 100;
	int n;
	int arr[max];
	n = inputNumber(max);
	inputArray(n, arr);
	findMaxDiplayElement(arr, n);
	
}

