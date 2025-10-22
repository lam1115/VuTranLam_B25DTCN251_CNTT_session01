#include <stdio.h>
int main(){
	float a, b;
	char n;
	printf("Nhap 2 so thuc va toan tu(+ - * /): ");
	scanf("%f%f %c", &a, &b, &n);
	switch(n){
		case '+':
			printf("%.1f", a + b);
			break;
		case '-':
			printf("%.1f", a - b);
			break;
		case '*':
			printf("%.1f", a * b);
			break;
		case '/':
			if(b == 0){
				printf("Loi: Khong the chia cho 0");
			}else{
				printf("%.1f", a / b);
		}
			break;
		default:
			printf("Loi: Toan tu khong hop le");
	}
}

