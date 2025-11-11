#include <stdio.h>
void maxx(int n, int arr[]){
	int max = 0;
	for (int i = 0; i < n ; i ++){
		if (arr[i] > arr[i + 1]){
			max = arr[i];
		}	
	}
	printf("Gia tri lon nhat: %d", max);
}
int main(){
	int n;
	int arr[100];
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	for (int i = 0 ; i < n; i++){
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	maxx(n, arr);
}

