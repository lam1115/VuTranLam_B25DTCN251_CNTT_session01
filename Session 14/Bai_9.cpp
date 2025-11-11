#include <stdio.h>
int ucln(int a, int b){
	if (a == 0 || b == 0){
		return a + b;
	}
	while(a != b){
		if (a > b){
			a = a - b;
		}else{
			b = b - a;
		}
	}
	return a;
}
int main(){
	int a, b;
	printf("Nhap so thu nhat: ");
	scanf("%d", &a);
	printf("Nhap so thu hai: ");
	scanf("%d", &b);
	printf("Uoc chung lon nhat la: %d", ucln(a, b));
}

