#include <stdio.h>
int main(){
	int n;
	float A, b, c, d;
	printf("Nhap so nguyen: ");
	scanf("%d", &n);
	if (n > 1){
		A = 1.00/((n - 1) * n) + 1.00/(n * (n + 1)) + 1.00/((n + 1) * (n + 2));
			printf("%.5f", A);	
	}else{
		printf("Moi nhap lai!");
	}
}

