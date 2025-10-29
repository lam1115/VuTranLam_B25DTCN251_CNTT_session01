#include <stdio.h>
int main(){
	int a, b;
	printf("Nhap 2 so nguyen: ");
	scanf("%d%d", &a, &b);
	while(b != 0){
		int temp = b;
		b = a % b;
		a = temp;
	}
	printf("UCLN: %d", a);
}
