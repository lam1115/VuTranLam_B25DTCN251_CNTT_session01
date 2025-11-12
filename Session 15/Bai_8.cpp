#include <stdio.h>
int inputTotalElement(int maxElement){
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
	for (int i = 0; i < n; i ++){
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}
int removeSameElement(int n, int arr[]){
	int i = 0, j;
	while(i < n){
		j = i + 1;
		while(j < n){
			if (arr[j] == arr[i]){
				for (int k = j; k < n - 1; k++){
					arr[k] = arr[k + 1];
				}
				n --;
			}else{
				j ++;
			}
		}
		i ++;
	}
	printf("\nMang sau khi loai bo trung lap: ");
	for(int i = 0; i < n; i++){
		printf("%d  ", arr[i]);
	}
}
int main(){
	const int max = 100;
	int n;
	int arr[max];
	n = inputTotalElement(max);
	inputArray(n, arr);	
	removeSameElement(n, arr);
}

