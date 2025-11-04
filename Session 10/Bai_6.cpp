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
}

