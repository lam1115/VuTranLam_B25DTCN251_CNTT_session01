#include <stdio.h>
#include <math.h>
int main(){
	int n;
	fill:
		printf("Nhap so nguyen: ");
		scanf("%d", &n);
		if(n < 0){
			goto fill;
		}
	int tim;
	int variable = cbrt(n);
	for(int a = 0; a <= variable; a++){
		int a3 = pow(a, 3);
		int b3 = n - a3;
		if(b3 < 0){
			continue;
		}
		int b = round(cbrt(b3));
		if(b >= 0 && pow(b, 3) == b3){
			printf("(%d, %d)\n", a, b);
			tim = 1;
		}
	}
	if (tim == 0){
		printf("Khong tim duoc cap so thoa man.");
	}
}
