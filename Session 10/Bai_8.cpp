#include <stdio.h>
int main(){
	int n;
	int arr[100];
	int flag = 0;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n; i++){
		flag = 0;
		for (int j = 0; j < n - i - 1; j++){
			if (arr[j] > arr[j + 1]){
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 1;
			}
		}
		if (flag == 0){
			break;
		}
	}
	printf("Mang sau khi sap xep theo thu tu tang dan: \n");
	for(int i = 0; i < n; i++){
		printf("%d  ", arr[i]);
	}
	for (int i = 0; i < n; i++){
		flag = 0;
		for (int j = 0; j < n - i - 1; j++){
			if (arr[j] > arr[j + 1]){
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 1;
			}
		}
		if (flag == 0){
			break;
		}
	}
	int x, found = 0;
	printf("\nNhap phan tu can tim: ");
	scanf("%d", &x);
	
	int low = 0;
	int hight = n - 1;
	
	while(low <= hight){
		int mid = (low + hight)/2;
		if (arr[mid] == x){
			found ++;
			break;
		}else{
			if(arr[mid] < x){
				low = mid + 1;
			}else{
				hight = mid - 1;
			}
		}
	}
	if (found == 0){
		printf("\nPhan tu %d khong xuat hien trong mang", x);
	}else{
		printf("\nPhan tu xuat hien tai vi tri: ");
		for (int i = 0; i < n; i++){
			if(arr[i] == x){
				printf("%d", i);
			}
		}
	}
}

