#include <stdio.h>
int main(){
	int a, b, cong, tru, nhan, chia;
	scanf("%d%d", &a, &b);
	cong = a + b;
	tru = a - b;
	nhan = a * b;
	chia = (double)a / b;
	printf("%d""\n", cong);
	printf("%d""\n", tru);
	printf("%d""\n", nhan);
	printf("%lf", chia);
}
