#include <stdio.h>
int main(){
	int n , s = 0;
	printf("Nhap so nguyen duong: ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++){
		s += i;
	}
	printf("Tong = %d", s);
}

