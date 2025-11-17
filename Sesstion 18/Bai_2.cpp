#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b);
int main(){
	int x, y;
	printf("Nhap so thu nhat: ");
	scanf("%d", &x);
	printf("Nhap so thu hai: ");
	scanf("%d", &y);
	swap(&x, &y);
	printf("x = %d\ny = %d ", x, y);
}
void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
