#include <stdio.h>
void hieu(int a, int b){
	int s = a - b;
	printf("\nHieu 2 so: %d",s);
}
void tich(int a, int b){
	int s = a * b;
	printf("\nTich 2 so: %d", s);
}

int main(){
	int a, b;
	printf("Nhap so thu nhat: ");
	scanf("%d", &a);
	printf("Nhap so thu hai: ");
	scanf("%d", &b);
	hieu(a, b);
	tich(a, b);
}
