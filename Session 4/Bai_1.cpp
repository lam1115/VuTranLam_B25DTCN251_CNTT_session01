#include <stdio.h>
int main(){
	int n;
	printf("Nhap so nguyen: ");
	scanf("%d", &n);
	if(n >=0){
		printf("So vua nhap la so nguyen duong.");
	}else{
		printf("So vua nhap la so nguyen am.");
	}
}

