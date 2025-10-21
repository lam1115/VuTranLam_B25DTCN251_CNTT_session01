#include <stdio.h>
int main(){
	int year;
	printf("Nhap so nguyen dai dien cho 1 nam: ");
	scanf("%d", &year);
	if(year % 4 == 0 && year % 100 != 0){
		printf("Nam %d la nam nhuan ", year);
	}else if(year % 400 == 0){
		printf("Nam %d la nam nhuan ", year);
	}else{
		printf("Nam %d khong la nam nhuan", year);
	}
}

