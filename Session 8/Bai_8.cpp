#include <stdio.h>
int main(){
	int row, colum;
	int arr[100][100];
	printf("Nhap so hang: ");
	scanf("%d", &row);
	printf("Nhap so cot ");
	scanf("%d", &colum);
	for(int i = 0; i < row; i++){
		for(int j = 0; j < colum; j++){
			printf("arr[%d][%d] = ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
	for (int i = 0; i < row; i++){
		for(int j = 0; j < colum; j++){
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
}
