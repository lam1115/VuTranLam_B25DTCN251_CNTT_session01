#include <stdio.h>
int main(){
	int a,b;
	float pi, sum;
	scanf("%d%d%f", &a, &b, &pi);
	sum = a + b + pi;
	printf("%.3f""\n", sum);
	printf("%d", (int)sum);
}
