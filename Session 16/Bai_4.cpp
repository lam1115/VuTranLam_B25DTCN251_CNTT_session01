#include <stdio.h>
#include <string.h>
int main(){
	char str[100];
	char n;
	int count = 0;
	printf("Nhap chuoi: ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	int length = strlen(str);
	printf("Nhap ki tu bat ki: ");
	scanf("%c", &n);
	for (int i = 0; i < length; i++){
		if (str[i] == n){
			count++;
		}
	}
	if (count){
		printf("Gia tri %c xuat hien %d lan ", n, count);
	}else{
		printf("Gia tri khong xuat hien trong chuoi");
	}
}

