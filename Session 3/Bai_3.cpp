#include <stdio.h>
#include <math.h>
int main(){
	float r, C, P;
	printf("Nhap vao ban kinh  hinh tron: ");
	scanf("%f", &r);
	C = 2 * M_PI * r;
	P = M_PI * pow(r, 2);
	printf("Chu vi hinh tron: %.2f\n", C);
	printf("Dien tich hinh tron: %.2f", P);
}


