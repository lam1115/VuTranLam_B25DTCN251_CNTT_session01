#include <stdio.h>
#include <math.h>
int main(){
	int n, a, s;
	int gtri, count = 0;
	printf("Nhap so nguyen: ");
	scanf("%d", &n);
	if (n < 0){
		printf("-");
		n = -n;
	}
	gtri = n;
	if(gtri == 0){
		count = 1;
	}else{
		while(gtri > 0){
			gtri /= 10;
			count ++;
		}
	}
	for(int i = 0; i < count; i++){
		a = pow(10, 1);
		s = n % a;
		printf("%d", s); 
		n /= a;
	}
}
