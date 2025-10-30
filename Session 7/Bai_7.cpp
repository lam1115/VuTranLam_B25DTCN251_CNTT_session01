#include <stdio.h>
#include <math.h>
int main(){
	int a, b, t;
	printf("Nhap 2 so nguyen: ");
	scanf("%d%d", &a, &b);
	printf("Cac so nguyen to trong khoang %d den %d la: ", a, b);
	for (int i = a; i <= b; i++){
		t = 1;
		for(int j = 2; j <= sqrt(i); j++){
			if(i % j == 0){
				t = 0;
			}
		}
		if(t == 1 && i != 1){
			printf("%d ", i);
		}
	}
}
