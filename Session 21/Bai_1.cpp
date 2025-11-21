#include <stdio.h>
#include <stdlib.h>
#define MAX 100

struct myCar{
	char model[50];
	int year;
	double price;
};

int main(){
	struct myCar Car[MAX] = {
		{"Audi", 2020, 6500},
		{"Honda", 2023, 500},
		{"KIA", 2024, 600}
	};
	int n = 3;
	for (int i = 0; i < n; i++){
		printf("\nXe thu %d\n", i + 1);
		printf("Ten: %s - San xuat nam: %d - Gia: %.2lf", Car[i].model,Car[i].year,Car[i].price);
	}
}
