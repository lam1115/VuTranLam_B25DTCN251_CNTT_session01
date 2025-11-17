#include <stdio.h>
#include <stdlib.h>
void sumNumber(int *a, int *b);
int main(){
	int x, y;
	printf("Nhap so thu nhat: ");
	scanf("%d", &x);
	printf("Nhap so thu hai: ");
	scanf("%d", &y);
	sumNumber(&x, &y);

	
}
void sumNumber(int *a, int *b){
	int sum = (*a) + (*b);
	printf("Tong cua 2 so la: %d", sum);
}
