#include <stdio.h>
int inputNumber(){
	int n;
	do{
		printf("Nhap so nguyen duong: ");
		scanf("%d", &n);
		if (n < 1){
			printf("\nNhap lai: ");
		}
	}while(n < 1);
	return n;
}
void dislayNumber(int n){
	int sum = 0;
	int temp = n;
	while(n > 0){
		sum = sum + n % 10;
		n /= 10;
	}
	printf("\nTong cac chu so cua so %d la: %d", temp, sum);
}

int main(){
	int n;
	n = inputNumber();
	dislayNumber(n);
}

