#include <stdio.h>
int main(){
	float a, b, s;
	int n;
	printf("Nhap vao 2 so bat ki: ");
	scanf("%f%f", &a, &b);
	next:
	printf("1.Tong 2 so\n2.Hieu 2 so\n3.Tich 2 so\n4.Thuong 2 so\n5.Thoat\nLua chon cua ban: ");
	scanf("%d", &n);
	switch(n){
		case 1:
			s = a + b;
			printf("%f\n", s);
			goto next;
			break;
		case 2:
			s = a - b;
			printf("%f\n", s);
			goto next;
			break;
		case 3:
			s = a * b;
			printf("%f\n", s);
			goto next;
			break;	
		case 4:
			s = a/b;
			printf("%f\n", s);
			goto next;
			break;
		case 5:
			return 0;
			break;
		default:
			printf("Loi\n");
			goto next;
	}
}


