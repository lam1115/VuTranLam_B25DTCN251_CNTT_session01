#include <stdio.h>
int main(){
	int a, b, c, d, A;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	A = a * b - 2 * c + 3 * (a - d);
	printf("%d", A);
}
