#include <stdio.h>
int main(){
	float C, F;
	printf("Nhap vao nhiet do theo thang Celsius: ");
	scanf("%f", &C);
	F = C * 9/5 + 32;
	printf("Nhiet do thang Fahrenheit la: %f", F);
	
}
