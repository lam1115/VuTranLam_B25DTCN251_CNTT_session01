#include <stdio.h>
int main(){
	int n;
	int arr[100];
	int value;
	int count = 0;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	printf("Nhap gia tri can tim: ");
	scanf("%d", &value);
	for (int i = 0; i < n; i ++){
		if (arr[i] == value){
			count ++;
		}
	}
	printf("Gia tri %d xuat hien %d lan",value ,count);
}

