#include <stdio.h>
int main(){
	float a, b, P;
	printf("Nhap lan luot canh day va chieu cao: ");
	scanf("%f%f", &a, &b);
	P = (a * b) * 0.5;
	printf("Dien tich tam giac la: %.2f", P);
}

