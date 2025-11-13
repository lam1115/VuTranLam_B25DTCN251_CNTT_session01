#include <stdio.h>
#include <string.h>
int main(){
	char str[100];
	printf("Nhap chuoi: ");
	fgets(str, sizeof(str), stdin);
	
	int count = 0;
	for (int i = 0; i < strlen(str); i++){
		if (str[i - 1] == ' ' && str[i] != ' '){
			count ++;
		}
	}
	printf("So tu trong chuoi la: %d", count);
}
