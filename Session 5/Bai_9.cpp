#include <stdio.h>
int main(){
	float hsl, luong;
	int day, n;
	printf("Nhap he so luong: ");
	scanf("%f", &hsl);
	printf("Nhap so ngay cong: ");
	scanf("%d", &day);
	printf("Chon chuc vu:\n1:Nhan vien.\n2:To truong.\n3:Quan ly.\n");
	scanf("%d", &n);
	switch(n){
		case 1:
			if(day > 26){
				luong = day * 160000 * hsl + 500000 + (day - 26) * 200000;
				printf("Luong cuoi thang: %.2f", luong);
			}else{
				luong = day * 160000 * hsl + 500000;
				printf("Luong cuoi thang: %.2f", luong);
			}
			break;
		case 2:
			if(day > 26){
				luong = day * 160000 * hsl + 1000000 + (day - 26) * 200000;
				printf("Luong cuoi thang: %.2f", luong);
			}else{
				luong = day * 160000 * hsl + 1000000;
				printf("Luong cuoi thang: %.2f");
			}
			break;
		case 3:
			if(day > 26){
				luong = day * 160000 * hsl + 2000000 + (day - 26) * 200000;
				printf("Luong cuoi thang: %.2f", luong);
			}else {
				luong = day * 160000 * hsl + 2000000;
				printf("Luong cuoi thang: %.2f", luong);
			}
			break;
		default:
			printf("Khai bao khong hop le.");
	}
}

