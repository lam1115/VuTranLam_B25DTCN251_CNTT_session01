#include <stdio.h>
int main(){
	int n;
	int arr[100];
	int count = 0, count2 = 0;
	printf("Nhap so phan tu trong mang: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	printf("Cac so chan trong mang la: ");
	for (int j = 0; j < n; j++){
		if(arr[j] % 2 == 0){
			printf("%2d", arr[j]);
			count ++;
		}
	}
	printf("\nCac so le trong mang la: ");
	for (int j = 0; j < n; j ++){
		if (arr[j] % 2 == 1){
			printf("%2d", arr[j]);
			count2 ++;
		}
	}
	printf("\nTong so chan = %d", count);
	printf("\nTong so le = %d", count2);
}

