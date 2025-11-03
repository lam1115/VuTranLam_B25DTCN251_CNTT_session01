#include <stdio.h>
int main(){
	int n;
	float s;
	int arr[100];
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	for (int j = 0; j < n; j++){
		s += arr[j];
	}
	s /= n;
	printf("Gia tri trung binh cua cac phan tu: %.2f", s);
}

