#include <stdio.h>
int main(){
	int age, money = 20000;
	printf("Nhap do tuoi cua khach: ");
	scanf("%d", &age);
	if(0 < age && age <6){
		printf("So tien ve: 0 VND");
	}else if(6 <= age && age <= 18){
		money = money /2;
		printf("So tien ve: %d", money);
	}else if(19 <= age && age <= 60){
		printf("So tien ve: %d", money);
	}else if(age > 60){
		money = money * (70.00/100.00);
		printf("So tien ve: %d", money);
	}else{
		printf("Tuoi khong hop le");
	}
}

