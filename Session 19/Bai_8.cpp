#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 100
void inputArray(int *arr, int *n){
	do{
		printf("Nhap so phan tu cua mang: ");
		scanf("%d", n);
		if (*n < 0 || *n > MAX){
			printf("\nNhap lai\n");
		}
	}while(*n < 0 || *n > MAX);
	for (int i = 0; i < *n; i++){
		printf("arr[%d] = ", i);
		scanf("%d", (arr + i));
	}
}
void displayEvenElement(int *arr, int n){
	printf("Cac phan tu la so chan: ");
	for (int i = 0; i < n; i++){
		if (*(arr + i) % 2 == 0){
			printf("%d ", *(arr + i));
		}
	}
}
int isPrime(int x){
	if(x < 2){
		return 0;
	}
	for(int i = 2; i <= sqrt(x); i++){
		if(x % i == 0){
			return 0;
		}
	}
	return 1;
}
void displayPrimeElement(int *arr, int n){
	printf("Cac phan tu la so nguyen to cua mang: ");
	for(int i = 0; i < n; i++){
		if(	isPrime( *(arr + i))){
			printf("%d ", *(arr + i));
		}
	}
}
void inverseArray(int *arr, int n){
	int temp;
	for (int i = 0 ; i < n/2; i++){
		temp = *(arr + i);
		*(arr + i) = *(arr + n - 1 - i);
		*(arr + n - 1 - i) = temp;
	}
	printf("\nMang sau khi dao nguoc: ");
	for (int i = 0; i < n; i++){
		printf("%d ", *(arr + i));
	}
}
void sortingArray(int *arr, int n, int sortingType){
	for(int i = 1; i < n; i++){
		int j = i - 1;
		int temp = arr[i];
		switch(sortingType){
			case 1:
				while(j >= 0 && arr[j] > temp){
					arr[j + 1] = arr[j];
					j--;
				}
				arr[j + 1] = temp;
				break;
			case 2:
				while(j >= 0 && arr[j] < temp){
					arr[j + 1] = arr[j];
					j--;
				}
				arr[j + 1] = temp;
				break;
		}
	}
	printf("Mang sau khi sap xep: ");
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
}
int search(int *arr, int n,int x){
	printf("Gia tri %d xuat hien tai vi tri: ");
	for (int i = 0; i < n; i++){
		if (*(arr + i) == x){
			printf("%d ", i);
		}
	}
}
int main(){
	int choose;
	int backTomenu = 1;
	int arr[MAX];
	int n;
	while(1){
		system("cls");
		printf("----------MENU----------");
		printf("\n1.Nhap so phan tu va tung phan tu");
		printf("\n2.In cac phan tu la so chan");
		printf("\n3.In cac phan tu la so nguyen to");
		printf("\n4.Dao nguoc mang");
		printf("\n5.Sap xep mang");
		printf("\n6.Nhap vao mot phan tu va tim kiem phan tu trong mang");
		printf("\n7.Thoat");
		printf("\nLua chon: ");
		scanf("%d", &choose);
		switch(choose){
			case 1:{
				inputArray(arr, &n);
				break;
			}
			case 2:{
				displayEvenElement(arr, n);
				fflush(stdin);
				getchar();
				break;
			}
			case 3:{
				displayPrimeElement(arr, n);
				fflush(stdin);
				getchar();
				break;
			}
			case 4:{
				inverseArray(arr, n);
				fflush(stdin);
				getchar();
				break;
			}
			case 5:{
				while(backTomenu){
					int sortingType;
					printf("\n1.Tang dan");
					printf("\n2.Giam dan");
					printf("\n3. Back to menu");
					printf("\nLua chon: ");
					scanf("%d", &sortingType);
					switch(sortingType){
						case 1:{
							sortingArray(arr,n,1);
							break;
						}
						case 2:{
							sortingArray(arr,n,2);
							break;
						}
						case 3:{
							backTomenu = 0;
							break;
						}
						default:
							printf("Nhap tu 1 - 3");
					}
				}
				fflush(stdin);
				getchar();
				break;
			}
			case 6:{
				int x;
				printf("Nhap gia tri can tim: ");
				scanf("%d", &x);
				search(arr, n, x);
				fflush(stdin);
				getchar();
				break;
			}
			case 7:{
				exit(0);
				break;
			}
			default:
				printf("Nhap tu 1 - 7");
		}
	}
}
