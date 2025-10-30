#include <stdio.h>
#include <math.h>
int main(){
	int n, a, s, d, ss;
	int gtri, count;
	printf("Nhap so nguyen: ");
	scanf("%d", &n);
	ss = n;
	gtri = n;
	count = 0;
	if(gtri == 0){
		count = 1;
	}else{
		while(gtri > 0){
			gtri /= 10;
			count ++;
		}
	}
	d = 0;
	for(int i = count - 1; i >= 0; i --){
		a = pow(10, i);
		s = n / a;
		n %= a;
		d += pow(s, count);
	}
	if (ss == d){
		printf("La so Armstrong.");
	}else{
		printf("Khong la so Armstrong.");
	}
}

    
