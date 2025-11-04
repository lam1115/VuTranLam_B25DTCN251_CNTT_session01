#include <stdio.h>
int main(){
	int n;
	int arr[100];
	int x;
	int flag = 0;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	printf("Nhap phan tu can tim: ");
	scanf("%d", &x);
	for (int i = 0; i < n; i++){
		if (arr[i] == x){
			printf("%d", i);
			flag = 1;
		}
	}
	if (flag == 0){
		printf("Khong tim thay\n");
	}
}

