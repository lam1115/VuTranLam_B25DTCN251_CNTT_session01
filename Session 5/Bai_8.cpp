#include <stdio.h>
int main(){
	float v;
	printf("Nhap so met khoi nuoc tieu thu: ");
	scanf("%f", &v);
	if(0 <= v && v <= 10){
		v = v * 6000;
		printf("Tong tien: %.2f", v);
	}else if(11 <= v && v <= 20){
		v = 60000 + (v - 10) * 7000;
		printf("Tong tien: %.2f", v);
	}else if(21 <= v && v <= 30){
		v = 130000 + (v - 20) * 8500;
		printf("Tong tien: %.2f", v);
	}else if( v > 30){
		v = 215000 + (v - 30) * 10000;
		printf("Tong tien: %.2f", v);
	}else{
		printf("Thong so khong hop le.");
	}
}

