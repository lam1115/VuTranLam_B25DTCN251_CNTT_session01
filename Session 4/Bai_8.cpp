#include <stdio.h>
int main(){
	int a, b, c;
	printf("Nhap lan luot 3 canh cua tam giac: ");
	scanf("%d%d%d", &a, &b, &c);
	if(a + b > c && a + c > b && b + c > a){
		printf("La 3 canh cua tam giac.");
	}else{
		printf("Khong la 3 canh cua tam giac.");
	}
}

