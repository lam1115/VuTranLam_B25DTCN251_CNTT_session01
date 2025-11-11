#include <stdio.h>
void giaithua(int n){
	int sum = 1;
	for (int i = 1; i <= n; i++){
		sum *= i;
	}
	printf("Giai thua cua %d: %d", n, sum);
}
int main(){
	int n;
	printf("Nhap so nguyen: ");
	scanf("%d", &n);
	giaithua(n);
}

