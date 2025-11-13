#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
	char str[100];
	int count = 0;
	printf("Nhap chuoi: ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	for (int i = 0; i < strlen(str); i++){
		if (isalpha(str[i])){
			count ++;
		}
	}
	printf("So ki tu la chu cai: %d\n", count);
}

//	isalpha: kiem tra chu cai
// 	isdigit: keim tra chu so
