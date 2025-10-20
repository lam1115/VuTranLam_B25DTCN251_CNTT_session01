#include <stdio.h>
int main(){
	int a, d1, d2, d3, d4, s;
	printf("Nhap vao so co 4 chu so: ");
	scanf("%d", &a);
	d1 = a % 10;
	d2 = (a/10) % 10;
	d3 = (a/100) % 10;
	d4 = (a/1000) % 10;
	s = d1 + d2 + d3 + d4;
	printf("Tong cac chu so: %d", s);
}

