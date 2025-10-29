#include <stdio.h>
int main(){
	int a, b, c, n, S;
note:
	printf("1.Nhap 3 so\n2.Tong 3 so\n3.Trung binh cong 3 so\n4.So nho nhat\n5.So lon nhat\n6.Thoat\n\n");
	scanf("%d", &n);
	switch(n){
		case 1:
			printf("Nhap 3 so nguyen: ");
			scanf("%d%d%d", &a, &b, &c);
			goto menu;
			break;
		case 2: case 3: case 4 : case 5: case 6:
			printf("Vui long nhap 3 so truoc.\n");
			goto note;
			break;
		default:
			printf("Loi\n");
	}
menu:
	printf("2.Tong 3 so\n3.Trung binh cong 3 so\n4.So nho nhat\n5.So lon nhat\n6.Thoat\n");
	scanf("%d", &n);
switch(n){
	case 2:
		printf("Tong cua 3 so: %d\n\n", a+b+c);
		goto menu;
		break;
	case 3:
		printf("Trung binh cong cua 3 so: %d\n\n", (a+b+c)/3);
		goto menu;
		break;
	case 4:
		if(a > b){
			S = a;
			a = b;
			b = S;
		}else if(b > c){
			S = b;
			b = c;
			c = S;
		}else if(a > c){
			S = a;
			a = c;
			c = S;
		}else if(a > b){
			S = a;
			a = b;
			b = S;
		}else if(b > c){
			S = b;
			b = c;    
			c = S;
		}else if(a > c){
			S = a;
			a = c;
			c = S;
		}
		printf("So nho nhat la: %d\n\n", a);
		goto menu;
		break;
	case 5:
		if(a > b){
			S = a;
			a = b;
			b = S;
		}else if(b > c){
			S = b;
			b = c;
			c = S;
		}else if(a > c){
			S = a;
			a = c;
			c = S;
		}else if(a > b){
			S = a;
			a = b;
			b = S;
		}else if(b > c){
			S = b;
			b = c;
			c = S;
		}else if(a > c){
			S = a;
			a = c;      
			c = S;
		}
		printf("So lon nhat la: %d\n\n", c);
		goto menu;
		break;
	case 6:
		return 0;
		break;
	default:
		printf("Loi\n");
		goto menu;
}

}


