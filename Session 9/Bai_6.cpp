#include <stdio.h>
int main(){
	int n, x;
	int arr[100];
	int check = 1;
	int found = 0; 
	printf("Nhap so phan tu trong mang: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	printf("Nhap gia tri can tim: ");
	scanf("%d", &x);
	for (int j = 0; j < n; j ++){
		if (arr[j] == x){
			found ++;
		}
	}
	if (found == 0){
		printf("Gia tri %d khong xuat hien trong mang: ", x);
	}else{
		printf("Gia tri %d xuat hien %d lan trong mang. ", x, found);
		printf("Xuat hien tai cac vi tri: \n");
		for (int j = 0; j < n; j ++){
			if (arr[j] == x){
				printf("%d ", j);
			}
		}
	}
}
