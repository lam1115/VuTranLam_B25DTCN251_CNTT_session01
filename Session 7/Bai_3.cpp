#include <stdio.h>
int main(){
	long n;
	do{
		printf("Nhap so nguyen duong n: ");
		scanf("%ld",&n);
		if(n<1){
			printf("Nhap lai n \n");
		}
	}while(n<1);

	long temp = n;
	long inverse = 0;
	while(temp > 0){
		int unit = temp % 10;
		inverse = inverse * 10 + unit;
		temp = temp / 10;
	}
	if(inverse == n){
		printf("%ld la so doi xuong",n);
	}else{
		printf("%ld khong phai la so doi xung",n);
	}
}


