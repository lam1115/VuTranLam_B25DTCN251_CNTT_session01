#include <stdio.h>
int main(){
	float a, b, x;
	printf("Nhap vao 2 so thuc: ");
	scanf("%f%f", &a, &b);
	if(a == 0 && b == 0){
		printf("Phuong trinh co vo nghiem");
	}else if(a == 0 && b != 0){
		printf("Phuong trinh co vo so nghiem");
	}else if(a != 0){
		x = -(b/a);
		printf("Phuong trinh co nghiem duy nhat x = %f", x);
	}
}

