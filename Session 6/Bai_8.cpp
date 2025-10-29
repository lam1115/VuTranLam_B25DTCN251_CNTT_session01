#include <stdio.h>
int main(){
	int a, b, s, t;
	printf("Nhap 2 so nguyen: ");
	scanf("%d%d", &a, &b);
	s = a;
	t = b;
	while(b != 0){
		int temp = b;
		b = a % b;
		a = temp;
	}
	printf("BCNN: %d", (s * t)/a);
}

