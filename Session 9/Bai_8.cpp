#include <stdio.h>
#include <math.h>
int main(){
	int n;
	int arr[100];
	int t, count = 0, s = 0;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i ++){
		printf("arrr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n; i++){
		t = 1;
		for (int j = 2; j <= sqrt(arr[i]); j++){
			if (arr[i] % j == 0){
				t = 0;
			}
		}
		if (t == 1 && arr[i] != 1){
			count ++;
			s += arr[i];
		}
	}
	printf("Cac so nguyen to trong mang la: %d\n", count);
	printf("Tong cac so nguyen to: %d", s);
}
