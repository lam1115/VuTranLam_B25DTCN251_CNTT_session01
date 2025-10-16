#include <stdio.h>
#include <math.h>
int main(){
	int a, b, c, A;
	scanf("%d%d%d", &a, &b, &c);
	if(a + b - c >= 0){
		A = pow(a, 3) + pow(b, b) + 2*c + sqrt(a + b - c);
	printf("%d", A);
	}else{	
		printf("Khong can duoc cho 0");
	}
}
