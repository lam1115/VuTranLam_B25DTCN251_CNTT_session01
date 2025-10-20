#include <stdio.h>
int main(){
	int a, d1, d2, d3, d4, result;
	printf("Nhap vao so co 4 chu so: ");
	scanf("%d", &a);
	d1 = a % 10;
	d2 = (a/10) % 10;
	d3 = (a/100) % 10;
	d4 = (a/1000) % 10;
	result = d1 * 1000 + d2 * 100 + d3 * 10 + d4;
	printf("So nghich dao: %d", result);
}

