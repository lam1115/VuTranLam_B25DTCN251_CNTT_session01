#include <stdio.h>
int main(){
	int n;
	printf("Nhap so nguyen: ");
	scanf("%d", &n);
	if (n % 2 == 0){
		printf("So vua nhap la so chan."); 
	}else{
		printf("So vua nhap la so le.");
	}
}

