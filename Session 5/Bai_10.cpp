#include <stdio.h>
int main(){
	float v, tien;
	int n;
	printf("Nhap so tien dien: ");
	scanf("%f", &v);
	printf("Loai ho tieu dung:\n1:Ho gia dinh.\n2:Ho kinh doanh.\n3:Ho san xuat.\n");
	scanf("%d", &n);
	switch(n){
		case 1:
			if(0 <= v && v <= 50){
				tien = (v * 1500) + (v * 1500) * (5.00/100.00);
				printf("Tien dien cuoi thang: %.2f", tien);
			}else if(51 <= v && v <= 100){
				tien = (75000 + (v - 50) * 2000) + ((75000 + (v - 50) * 2000) * (5.00/100.00));
				printf("Tien dien cuoi thang: %.2f", tien);
			}else if(101 <= v && v <= 200){
				tien = (175000 + (v - 100) * 2500) + ((175000 + (v - 100) * 2500) * (5.00/100.00));
				printf("Tien dien cuoi thang: %.2f", tien);
			}else if( v > 200){
				tien = (425000 + (v - 200) * 3000) + ((425000 + (v - 200) * 3000) * (5.00/100.00));
				printf("Tien dien cuoi thang: %.2f", tien);
			}else{
				printf("Du lieu khong hop le.");
			}
			break;
		case 2:
			if(0 <= v && v <= 50){
				tien = (v * 1500) + (v * 1500) * (10.00/100.00);
				printf("Tien dien cuoi thang: %.2f", tien);
			}else if(51 <= v && v <= 100){
				tien = (75000 + (v - 50) * 2000) + ((75000 + (v - 50) * 2000) * (10.00/100.00));
				printf("Tien dien cuoi thang: %.2f", tien);
			}else if(101 <= v && v <= 200){
				tien = (175000 + (v - 100) * 2500) + ((175000 + (v - 100) * 2500) * (10.00/100.00));
				printf("Tien dien cuoi thang: %.2f", tien);
			}else if( v > 200){
				tien = (425000 + (v - 200) * 3000) + ((425000 + (v - 200) * 3000) * (10.00/100.00));
				printf("Tien dien cuoi thang: %.2f", tien);
			}else{
				printf("Du lieu khong hop le.");
			}
			break;
		case 3:
			if(0 <= v && v <= 50){
				tien = (v * 1500) + (v * 1500) * (8.00/100.00);
				printf("Tien dien cuoi thang: %.2f", tien);
			}else if(51 <= v && v <= 100){
				tien = (75000 + (v - 50) * 2000) + ((75000 + (v - 50) * 2000) * (8.00/100.00));
				printf("Tien dien cuoi thang: %.2f", tien);
			}else if(101 <= v && v <= 200){
				tien = (175000 + (v - 100) * 2500) + ((175000 + (v - 100) * 2500) * (8.00/100.00));
				printf("Tien dien cuoi thang: %.2f", tien);
			}else if( v > 200){
				tien = (425000 + (v - 200) * 3000) + ((425000 + (v - 200) * 3000) * (8.00/100.00));
				printf("Tien dien cuoi thang: %.2f", tien);
			}else{
				printf("Du lieu khong hop le.");
			}
			break;
		default:
			printf("Du lieu khong hop le.");
	}
}
