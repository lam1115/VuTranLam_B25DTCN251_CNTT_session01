#include <stdio.h>
int main(){
	int n;
	printf("Nhap vao so nguyen: ");
	scanf("%d", &n);
	if(n % 5 == 0 && n % 3 == 0){
		printf("So vua nhap chia het cho 3 va 5.");
	}else if(n % 3 == 0){
		printf("So vua nhap chia het cho 3.");
	}else if(n % 5 == 0){
		printf("So vua nhap chia het cho 5.");
	}else{
		printf("So vua nhap khong thoa man dieu kien.");
	}
}

