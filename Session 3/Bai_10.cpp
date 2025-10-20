#include <stdio.h>
#include <math.h>
int main(){
	int a, b;
	float S;
	printf("Nhap vao 2 so nguyen: ");
	scanf("%d%d", &a, &b);
	if (a > 0 && b > 0){
		S = sqrt(a + sqrt(b + 1)) + sqrt(b + sqrt(pow(a, 2) + pow(b, 2)));
		printf("%.2f", S);
	}else{
		printf("Moi nhap lai!");
	}
}

