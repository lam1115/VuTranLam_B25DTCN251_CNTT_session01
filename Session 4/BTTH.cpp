#include <stdio.h>
int main(){
	int year, tuoi;
	float dtb;
	printf("Nhap nam sinh cua sinh vien: ");
	scanf("%d", &year);
	printf("Nhap diem trung binh: ");
	scanf("%f", &dtb);
	if (year > 1900 && year < 2025){
		printf("Nam sinh khong hop le.");
	}else{
		tuoi = 2025 - year;
		if(tuoi < 18){
			printf("Chua du 18 tuoi");
		}else{
			if(10 >= dtb && dtb >= 8.0){
				printf("Thong tin sinh vien:\nNam sinh: %d\nTuoi: %d\nHoc luc: Gioi", year, tuoi);
			}else if(7.9 >= dtb && dtb >= 6.5){
				printf("Thong tin sinh vien:\nNam sinh: %d\nTuoi: %d\nHoc luc: Kha", year, tuoi);
			}else if(6.4 >= dtb && dtb >= 5.0){
				printf("Thong tin sinh vien:\nNam sinh: %d\nTuoi: %d\nHoc luc: Trung binh", year, tuoi);
			}else if(0 <= dtb && dtb < 5.0){
				printf("Thong tin sinh vien:\nNam sinh: %d\nTuoi: %d\nHoc luc: Yeu", year, tuoi);
			}
		}
	}
}


