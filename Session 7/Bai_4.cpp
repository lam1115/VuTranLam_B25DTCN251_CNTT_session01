#include <stdio.h>
int main(){
	int m, n;
	printf("Nhap chieu dai, chieu rong: ");
	scanf("%d%d", &m, &n);
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("*");
		}
		printf("\n");
	}
}

