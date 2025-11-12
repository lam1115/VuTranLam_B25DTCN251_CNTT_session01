#include <stdio.h>
int inputNumber(int n){
	do{
		printf("Nhap so nguyen: ");
		scanf("%d", &n);
		if (n < 1){
			printf("\nNhap lai ");
		}
	}while(n < 0);
	return n;
}
int reverseNumber(int n){
	int reslut = 0;
	while(n > 0){
		reslut = reslut*10 + n%10;
		n /= 10;
	}
	return reslut;
}
int main(){
	int n = inputNumber(n);
	n = reverseNumber(n);
	printf("So dao nguoc: %d", n);
}

