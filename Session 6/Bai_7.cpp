#include <stdio.h>
#include <math.h>
int ucln(int a, int b){
	if(a == 0 || b == 0){
		return a + b;
	}
	while(a != b){
		if(a > b){
			a = a - b;
		}else{
			b = b - a;
		}
	}
	return a;
}
int main(){
	int a, b;
	printf("Nhap 2 so nguyen: ");
	scanf("%d%d", &a ,&b);
	printf("%d", ucln(a, b));
}	
