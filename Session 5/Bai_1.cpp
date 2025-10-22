#include <stdio.h>
int main(){
	int a, b;
	printf("Nhap 2 so nguyen: ");
	scanf("%d%d", &a, &b);
	if(a > b){
		printf("So lon hon la: %d", a);
	}else if(b > a){
		printf("So lon hon la: %d", b);
	}else if(a == b){
		printf("Hai so bang nhau");
	}
}
