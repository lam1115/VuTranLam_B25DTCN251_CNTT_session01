#include <stdio.h>
#include <math.h>
int main(){
	int a, b;
	float S;
	printf("Nhap 2 so nguyen: ");
	scanf("%d%d", &a, &b);
	if (a > 0 && b > 0){
		S = (sqrt(pow(a, 2) + pow(b, 2)))/(a + b) + (sqrt(a) + sqrt(b))/(a * b);
		printf("%.2f", S);
	}else{
		printf("Moi nhap lai!");
	}
}

