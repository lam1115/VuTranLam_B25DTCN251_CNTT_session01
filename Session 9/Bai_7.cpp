#include <stdio.h>
int main(){
	int n;
	int arr[100];
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i ++){
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	int i = 0, j = n - 1;
	while(i < j){
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i ++;
		j --;
	}
	printf("Mang sau khi dao nguoc: ");
	for (int i = 0; i < n; i++){
		printf("%2d", arr[i]);
	}
}
