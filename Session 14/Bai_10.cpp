#include <stdio.h>
#include <stdlib.h>
int inputTotalElement(int maxElement){
	int n;
	do{
		printf("Nhap so phan tu: ");
		scanf("%d", &n);
		if (n < 0 || n > maxElement){
			printf("\nNhap lai so phan tu");
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

void printArray(int n, int arr[]){
	printf("\nCac phan tu trong mang: ");
	for (int i = 0; i < n; i ++){
		printf("%d  ", arr[i]);
	}
}

int insertElement(int max, int arr[], int n){
	if (n >= max){
		printf("\nMang da day");
		return n;
	}
	int value, index;
	printf("Nhap phan tu can them: ");
	scanf("%d", &value);
	do{
		printf("Chon vi tri: ");
		scanf("%d", &index);
		if (index < 0 || index > n){
			printf("\nVi tri khong hop le");
		}
	}while(index < 0 || index > n);
		for (int i = n; i >= index; i--){
		arr[i] = arr[i - 1];
	}
	arr[index] = value; 
	n++; 
	return n;
}

int updateElement(int arr[], int n){
	int value, index;
	printf("Nhap phan tu can sua: ");
	scanf("%d", &value);
	printf("Nhap vi tri can sua: ");
	scanf("%d", &index);
	for (int i = 0; i < n; i++){
		if (i == index){
			arr[index] = value;
		}
	}
	return n;
}

int delElement(int arr[], int n){
	int index;
	do{
		printf("Chon vi tri can xoa: ");
		scanf("%d", &index);
		if (index < 0 || index > n){
			printf("\nVi tri khong hop le");
		}
	}while(index < 0 || index > n);
	for (int i = index; i < n - 1; i++){
		arr[i] = arr[i + 1];
	}
	n --;
}

void sortElement(int n, int arr[]){
	int select;
	printf("\n+---------------------------------------------------+");
	printf("\n|1.Sap xep giam dan                                 |");
	printf("\n+---------------------------------------------------+");
	printf("\n|2.Sap xep tang dan                                 |");
	printf("\n+---------------------------------------------------+");
	printf("\n");
	scanf("%d", &select);
	switch(select){
		case 1:{
			for (int i = 0; i < n - 1; i++){
				for (int j = 0; j < n - i - 1; j++){
					if (arr[j] < arr[j + 1]){
						int temp = arr[j + 1];
						arr[j + 1] = arr[j];
						arr[j] = temp;
					}
				}
			}
			break;
		}
		case 2:{
			int i, key, j;
			for (i = 1; i < n; i++){
				key = arr[i];
				j = i - 1;
				while(j >= 0 && arr[j] > key){
					arr[j + 1] = arr[j];
					j--;
				}
				arr[j + 1] = key;
			}
			break;
		}
		default:
			printf("\nNhap 1 hoac 2");
	}
}

int isSorted(int arr[], int n){
	int ascending = 1;
	int descending = 1;
	for (int i = 0; i < n - 1; i++){
		if (arr[i] > arr[i + 1]){
			ascending = 0;
		}
		if (arr[i] < arr[i + 1]){
			descending = 0;
		}
	}
	return (ascending || descending);
}
void findElement(int n, int arr[]){
	int value;
	printf("Nhap gia tri can tim: ");
	scanf("%d", &value);
	char select;
	printf("\n+---------------------------------------------------+");
	printf("\n|a.Tim kiem tuyen tinh                              |");
	printf("\n+---------------------------------------------------+");
	printf("\n|b.Tim kiem nhi phan                                |");
	printf("\n+---------------------------------------------------+");
	printf("\n");
	scanf(" %c", &select);
	switch(select){
		case 'a':{
			int found = 0;
			for (int i = 0; i < n; i ++){
				if (arr[i] == value){
					printf("\nGia tri %d tai vi tri: %d\n", value, i );
					found = 1;
				}
			}
			if (found == 0){
				printf("\nGia tri khong xuat hien trong mang");
			}
			break;
		}
		case 'b':{
			int found = 0;
			if (!isSorted(arr, n)){
				printf("\nMang chua duoc sap xep\n");
				break;
			}
			int ascending = 1;
			if (arr[0] > arr[n - 1]){
				ascending = 0;
			}
			int left = 0, right = n - 1;
			printf("Gia tri %d xuat hien tai vi tri: ", value);
			while(left <= right){
				int mid = (left + right)/2;
				if (arr[mid] == value){
					printf("%d", mid);
					found = 1;
					break;
				}
				if (ascending){
					if (arr[mid] < value){
						left = mid + 1;
					}else{
						right = mid - 1;
					}
				}else{
					if (arr[mid] > value){
						left = mid + 1;
					}else{
						right = mid - 1;
					}
				}
			}
			if (!found){
				printf("Gia tri %d khong trong mang", value);
			}
			break;
		}
		default:
			printf("Nhap a hoac b");
	}
}

int main(){
	const int max = 100;
	int choose;
	int n;
	int arr[max];
	int index;
	do{
		printf("\n+---------------------------------------------------+");
		printf("\n|                        MENU                       |");
		printf("\n+---------------------------------------------------+");
		printf("\n|1.Nhap so phan tu can nhap va gia tri cac phan tu  |");
		printf("\n+---------------------------------------------------+");
		printf("\n|2.In gia tri cac phan tu dang quan ly              |");
		printf("\n+---------------------------------------------------+");
		printf("\n|3.Them phan tu vao vi tri chi dinh                 |");
		printf("\n+---------------------------------------------------+");
		printf("\n|4.Sua 1 phan tu o vi tri chi dinh                  |");
		printf("\n+---------------------------------------------------+");
		printf("\n|5.Xoa phan tu o vi tri chi dinh                    |");
		printf("\n+---------------------------------------------------+");
		printf("\n|6.Sap xep cac phan tu                              |");
		printf("\n+---------------------------------------------------+");
		printf("\n|7.Tim kiem phan tu nhap vao                        |");
		printf("\n+---------------------------------------------------+");
		printf("\n|8.Thoat                                            |");
		printf("\n+---------------------------------------------------+");
		printf("\n\nLua chon cua ban: ");
		scanf("%d", &choose);
		switch(choose){
			case 1:{
				n = inputTotalElement(max);
				inputArray(n, arr);
				break;
			}
			case 2:{
				printArray(n, arr);
				break;
			}
			case 3:{
				n = insertElement(max, arr, n);
				break;
			}
			case 4:{
				n = updateElement( arr, n);
				break;
			}
			case 5:{
				n = delElement(arr, n);
				break;
			}
			case 6:{
				sortElement(n, arr);
				break;
			}
			case 7:{
				findElement(n, arr);
				break;
			}
			case 8:{
				exit(0);
				break;
			}
			default:
				printf("\nNhap tu 1 - 8");
		}
	}while(1);
}

