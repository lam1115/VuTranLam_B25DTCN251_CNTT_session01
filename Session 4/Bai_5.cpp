#include <stdio.h>
int main(){
	double a, b, S;
	printf("Nhap vao chi so cu: \n");
	scanf("%lf", &a);
	printf("Nhap vao chi so moi: \n");
	scanf("%lf", &b);
	S = b - a;
	if(S >= 0 && 50 > S){
		S *= 10000;
		printf("Gia dien 1 thang: %.2lf", S);
	}else if(S>= 50 && 100 > S){
		S *=  15000;
		printf("Gia dien 1 thang: %.2lf", S);
	}else if(100 >= S && 150 > S){
		S = S * 20000;
		printf("Gia dien 1 thang: %.2lf", S);
	}else if(150 >= S && 200 > S){
		S *= 25000;
		printf("Gia dien 1 thang: %.2lf", S);
	}else if(S >= 200){
		S *= 30000;
		printf("Gia dien 1 thang: %.2lf", S);
	}else{
		printf("Gia dien khong hop li");
	}
}
	

