#include <stdio.h>
int main(){
	int secret = 7;
	int n;
	do{
	printf("Nhap vao so bat ki: ");
	scanf("%d", &n);
	} while(n != secret);
		printf("Chuc mung, ban da doan dung !");
}

