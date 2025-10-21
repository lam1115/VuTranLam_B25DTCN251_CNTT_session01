#include <stdio.h>
int main(){
	int day, month, year;
	printf("Nhap ngay, thang, nam: ");
	scanf("%d%d%d", &day, & month, & year);
	int hople = 1;
	if(month < 1 || month > 12){
		hople = 0;
	}else{
		int Songaytrongthang;
		switch(month){
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:
				Songaytrongthang = 31;
			break;
			case 4: case 6: case 9: case 11:
				Songaytrongthang = 30;
			break;
			case 2:
				if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
					Songaytrongthang = 29;
				}else{
					Songaytrongthang = 28;
				}
			break;
		}
		if (day < 1 || day > Songaytrongthang){
			hople = 0;
		}
		if(hople){
			printf("Ngay thang nam hop le");
		}else{
			printf("Ngay thang nam khong hop le");
		}
	}
}
