#include <stdio.h>
int main(){
	int n;
	int arr[100];
	int x, found = 0;
	int temp;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	printf("Nhap so can tim: ");
	scanf("%d", &x);
	int minn;
	for (int i = 1; i < n; i++){
		if (arr[i] < arr[0]){
			minn = arr[i];
			arr[i] = arr[0];
			arr[0] = minn;
		}
	}
	printf("So nguyen nho nhat trong mang la: %d", minn);
	int k;
	for (int i = 0; i < n - 1; i++){
		k = i;
		for (int j = i + 1; j < n; j++){
			if (arr[j] < arr[k]){
				k = j;
			}
		}
		temp = arr[k];
		arr[k] = arr[i];
		arr[i] = temp;
	}
	printf("\nMang sau khi duoc sap xep theo thu tu tang dan: ");
	for (int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	int left = 0, right = n - 1;
	while (left <= right){
		int mid = (left + right) / 2;
		if (arr[mid] == x){
			found ++;
			break;
		}else{
			if (arr[mid] < x){
				left = mid + 1;
			}else{
				right = mid - 1;
			}
		}
	}
	if (found == 0){
		printf("\nSo can tim khong co trong mang");
	}else{
		printf("\nPhan tu xuat hien tai vi tri: ");
		for (int i = 0; i < n; i++){
			if(arr[i] == x){
				printf("%d", i);
			}
		}
	}
}
