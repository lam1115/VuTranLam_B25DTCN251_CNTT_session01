#include <stdio.h>
int main(){
	int n;
	int arr[100];
	int count;
	int max_count;
	int gtrimax;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n; i++){
		count = 0;
		for (int j = 0; j < n; j++){
			if (arr[i] == arr[j]){
				count ++;
			}
		}
		if (count > max_count){
			max_count = count ;
			gtrimax = arr[i];
		}
	}
	printf("Gia tri xuat hien nhieu nhat: ");
	printf("%d", gtrimax);
}
