#include <stdio.h>
int main(){
	long n;
	int x, count = 0;
	printf("Nhap so n: ");
	scanf("%ld", &n);
	printf("Nhap chu so x (0 - 9): ");
	scanf("%d", &x);
	if(n < 0){
		n = -n;
	}
	if(n == 0 && x == 0){
		count = 1;
	}else{
		while(n > 0){
			int temp = n % 10;
			if(temp == x){
				count ++;
			}
			n /= 10;
		}
	}
	printf("Chu so %d xuat hien %d lan.", x, count);
}
