#include <stdio.h>
void sum(int a, int b){
	int sum = a + b;
	printf("Tong 2 so: %d", sum);
}
int main(){
	int a, b;
	printf("Nhap so thu nhat: ");
	scanf("%d", &a);
	printf("Nhap so thu hai: ");
	scanf("%d", &b);
	sum(a, b);
}
