#include <stdio.h>
int main(){
	int n;
	int arr[100];
	do{
		printf("Nhap so phan tu cua mang: ");
		scanf("%d", &n);
		if (n < 1 || n > 100){
			printf("Loi");
		}
	}while(n < 1 || n > 100);
	for (int i = 0; i < n; i++){
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	int countMax = 0;
	int count;
	int positionMax;
	for (int i = 0; i < n; i++){
		count = 1;
		for (int j = i + 1; j < n; j ++){
			if (arr[j] == arr[i]){
				count++;
			}
		}
		if (countMax < count){
			countMax = count;
			positionMax = i;
		}
	}
	printf("\nPhan tu co so lan xuat hien nhieu nhat la: ");
	for (int i = 0; i < n; i++){
		count = 1;
		for (int j = i + 1; j < n; j++){
			if (arr[j] == arr[i]){
			count++;
			}
		}
		if (countMax == count){
			printf("%d  ", arr[i]);
		}
	}
}
