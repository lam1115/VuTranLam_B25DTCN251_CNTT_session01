#include <stdio.h>
#include <math.h>
int main(){
	int a, b, c;
	float S;
	scanf("%d%d%d", &a, &b, &c);
	if(a != 0 && c != 0){
	S = ((pow(a,2) + sqrt(pow(b,2) + 4*a*c))/(2*a)) - ((double)(pow(b,3))/(pow(c,2))) + sqrt(fabs(a - b));
	printf("%.3f", S);
	}
	else{
		printf("That su cho a va c bang 0");
	}
}
//* S = ((a*a + sqrt(b*b + 4.0*a*c))/(2.0*a)) - ((b*b*b)/(c*c)) + sqrt(fabs(a - b));
// xac dinh ro can ep kieu khi chia hay khong  
// a*a = pow(a, 2), a*a*a = pow(a,3) 
