#include <stdio.h>
#include <math.h>
int main(){
	long n, a, s;
	long gtri, count;
	scanf("%ld", &n);
	if (n < 0){
		printf("-");
		n = -n;
	}
	gtri = n;
	count = 0;
	if (gtri == 0){
		count = 1;
	}else{
		while(gtri > 0){
			gtri /= 10;
			count ++;
		}
	}
	for(int i = count - 1;i >= 0; i--){
		s = pow(10, i);
		a = n / s;
		printf("%ld ", a);
		n %= s;
	}
}
