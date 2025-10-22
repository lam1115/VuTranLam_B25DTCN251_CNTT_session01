#include <stdio.h>
int main(){
	float m, n;
	printf("Nhap muc thu nhap:(Trieu dong)");
	scanf("%f", &m);
	if(m <= 5){
		n = m * (5.00/100.00);
		printf("Thue thu nhap phai dong: %.2f", n);
	}else if(5 < m && m <= 10){
		n = m * (10.00/100.00);
		printf("Thue thu nhap phai dong: %.2f", n);
	}else if(m > 10){
		n = m * (15.00/100.00);
		printf("Thue thu nhap phai dong: %.2f", n);
	}
}

