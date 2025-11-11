#include <stdio.h>
int isPerfcet(int x){
	int sum = 0;
	for (int i = 1; i < x; i++){
		if (x % i == 0){
			sum += i;
		}
	}
	if (sum == x){
		return 1;
	}else{
		return 0;
	}
}
int main(){
	int n; 
	printf("Nhap so nguyen: ");
	scanf("%d", &n);
	if (isPerfcet(n)){
		printf("True");
	}else{
		printf("False");
	}
}
