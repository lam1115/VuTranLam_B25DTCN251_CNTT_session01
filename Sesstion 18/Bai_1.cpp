#include <stdio.h>
#include <stdlib.h>
int main(){
	int y;
	printf("Nhap gia tri cua n: ");
	scanf("%d", &y);
	int *nPtr = &y;
	printf("Gia tri cua bien n: %d\n", y);
	printf("Dia chi cua bien n: %p\n", (void*)&y);
	printf("Gia tri cua bien n (qua con tro): %d\n", *nPtr);
	printf("Dia chi cua bien n (qua con tro): %p\n", (void*)nPtr);
}
