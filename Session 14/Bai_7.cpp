#include <stdio.h>
#include <math.h>
int isPrime(int n){
	if (n < 2){
		return 0;
	}
	for (int i = 2; i <= sqrt(n); i++){
		if (n % i == 0){
			return 0;
		}
	}  
	return 1;
}
int main(){
	int n;
	printf("Nhap so nguyen: ");
	scanf("%d", &n);
	if (isPrime(n)){
		printf("%d la so nguyen to ", n);
	}else{
		printf("%d khong la so nguyen to ", n);
	}
}
