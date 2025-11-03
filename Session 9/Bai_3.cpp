#include <stdio.h>
int main(){
	int n;
	int arr[100];
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);		
	}
	printf("\nPhan tu cua mang: ");
	for (int j = 0; j < n; j++){
		printf("%3d", arr[j]);
	}
}

