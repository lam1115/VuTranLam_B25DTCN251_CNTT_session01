#include <stdio.h>
#include <stdlib.h>
#define MAX 100
void inputArray(int *arr, int *n){
	do{
		printf("Nhap so phan tu cua mang: ");
		scanf("%d", n);
		if (*n < 1 || *n > MAX){
			printf("\nNhap lai\n");
		}
	}while(*n < 0 || *n > MAX);
	for (int i = 0; i < *n; i++){
		printf("arr[%d] = ", i);
		scanf("%d", (arr + i));
	}
}
void displayArray(int *arr, int n){
	printf("Phan tu cua mang: ");
	for (int i = 0; i < n; i++){
		printf("%d ", *(arr + i));
	}
}
void lengthArray(int *arr, int n){
	printf("Do dai mang: %d", n);
}
void sumArray(int *arr, int n){
	int sum;
	for (int i = 0; i < n; i++){
		sum = sum + *(arr + i);
	}
	printf("Tong phan tu trong mang: %d", sum);
}
void maxElement(int *arr, int n){
	int max = *(arr + 0);
	for (int i = 0; i < n; i++){
		if (max < *(arr + i)){
			max = *(arr + i);
		}
	}
	printf("Phan tu lon nhat trong mang: %d", max);
}
int main(){
	int arr[MAX];
	int n;
	int choose;
	while(1){
		system("cls");
		printf("----------MENU----------");
		printf("\n1.Nhap so phan tu va tung phan tu");
		printf("\n2.Hien thi cac phan tu trong mang");
		printf("\n3.Tinh do dai mang");
		printf("\n4.Tinh tong cac phan tu trong mang");
		printf("\n5.Hien thi phan tu lon nhat");
		printf("\n6.Thoat");
		printf("\nLua chon: ");
		scanf("%d", &choose);
		switch(choose){
			case 1:{
				inputArray(arr, &n);
				break;
			}
			case 2:{
				displayArray(arr, n);
				fflush(stdin);
				getchar();
				break;
			}
			case 3:{
				lengthArray(arr, n);
				fflush(stdin);
				getchar();
				break;
			}
			case 4:{
				sumArray(arr, n);
				fflush(stdin);
				getchar();
				break;
			}
			case 5:{
				maxElement(arr, n);
				fflush(stdin);
				getchar();
				break;
			}
			case 6:{
				exit(0);
				break;
			}
			default:
				printf("Nhap tu 1 - 6");
				fflush(stdin);
				getchar();
		}
	}
}
