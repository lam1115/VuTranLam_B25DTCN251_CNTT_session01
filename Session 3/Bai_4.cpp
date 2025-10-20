#include <stdio.h>
int main(){
	float T, V, A, s, a;
	printf("Lan luot nhap vao 3 diem: ");
	scanf("%f%f%f", &T, &V, &A);
	s = T + V + A;
	a = s/3;
	printf("Tong 3 diem: %.2f\n",s);
	printf("Diem tong binh: %.2f", a);
}

