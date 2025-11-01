#include <stdio.h>
int main(){
	int row ,colum;
	printf("Nhap so hang: ");
	scanf("%d", &row);
	printf("Nhap so cot: ");
	scanf("%d", &colum);
	int arr[100][100];
	for(int i = 0; i < row; i++){
		for(int j = 0; j < colum; j++){
			printf("arr[%d][%d] = ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
	printf("Mang su khi nhap: \n");
	for (int i = 0; i < row; i++){
		for(int j = 0; j < colum; j++){
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	printf("Phan tu nam tren duong bien: \n");
	for(int i = 0; i < row; i++){
		for(int j = 0; j < colum; j++){
			if (i == 0 || i == row - 1 || j == 0 || j == colum - 1){
				printf("%d\t", arr[i][j]);
			}else{
				printf("\t");
			}
		}
		printf("\n");
	}
}

