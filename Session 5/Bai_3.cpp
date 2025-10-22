#include <stdio.h>
int main(){
	float n;
	printf("Nhap vao diem trung binh: ");
	scanf("%f", &n);
	if(1 <= n && n <= 10){
		if(n >= 8){
			printf("Hoc luc gioi");
		}else if(n >= 6.5){
			printf("Hoc luc kha");
		}else if(n >= 5){
			printf("Hoc luc trung binh");
		}else{
			printf("Hoc luc yeu");
		}
	}else{
		printf("Diem khong hop le");
	}
}

