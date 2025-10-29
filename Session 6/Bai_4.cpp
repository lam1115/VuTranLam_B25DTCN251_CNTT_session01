#include <stdio.h>
int main(){
	int n, s, i = 1;
	do{
	printf("Nhap so nguyen: ");
	scanf("%d", &n);
	}while (1 > n || n > 10);
		while(i <= 10){
		s = n * i;
		printf("%d * %d = %d\n", n, i, s);
		i++;
	}
}

