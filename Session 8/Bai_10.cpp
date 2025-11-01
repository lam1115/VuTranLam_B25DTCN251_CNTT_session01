#include <stdio.h>
#include <math.h>
int main(){
	int n, t;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	int arr[100];
	for(int i = 0; i < n; i++){
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	printf("Mang sau khi nhap la: ");
	for (int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	printf("\nCac so nguyen to trong mang la: ");
	for(int i = 0; i < n; i++){
		t = 1;
		for(int j = 2; j <= sqrt(arr[i]); j++){
			if(arr[i] % j == 0){
				t = 0;
			}
		}
		if (t == 1 && arr[i] != 1){
			printf("%d ", arr[i]);
		}
	}	
}

