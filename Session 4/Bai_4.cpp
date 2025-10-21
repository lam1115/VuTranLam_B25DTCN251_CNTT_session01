#include <stdio.h>
int main(){
	int n;
	printf("Nhap vao so nguyen dai dien 12 thang: ");
	scanf("%d", &n);
	switch(n){
		case 1:
			printf("Thang %d co 31 ngay", n);
			break;
		case 2:
			printf("Thang %d co 28 hoac 29 ngay", n);
			break;
		case 3:
			printf("Thang %d co 31 ngay", n);
			break;
		case 4:
			printf("Thang %d co 30 ngay", n);
			break;
		case 5:
			printf("Thang %d co 31 ngay", n);
			break;
		case 6:
			printf("Thang %d co 30 ngay", n);
			break;
		case 7:
			printf("Thang %d co 31 ngay", n);
			break;
		case 8:
			printf("Thang %d co 31 ngay", n);
			break;
		case 9:
			printf("Thang %d co 30 ngay", n);
			break;
		case 10:
			printf("Thang %d co 31 ngay", n);
			break;
		case 11:
			printf("Thang %d co 30 ngay", n);
			break;
		case 12:
			printf("Thang %d co 31 ngay", n);
			break;
		default:
			printf("Thang khong hop le.");
	}		
}


