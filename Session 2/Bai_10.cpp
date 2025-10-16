#include <stdio.h>
#include <math.h>
int main(){
	int a, b, c;
	float S;
	scanf("%d%d%d", &a, &b, &c);
	if (c != 0){
		S = sqrt(pow(a, 2) + pow(b, 2))/(c + 1) + (a*b)/c - sqrt(abs(a - b) + pow(c, 2));
		printf("%.2f", S); 
	}
	else{
		printf("Math errol");
	}
}
