#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
	char str[100];
	int alpha = 0;
	int digit = 0;
	int sp = 0;
	printf("Nhap chuoi: ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	for (int i = 0; i < strlen(str); i++){
		if (isalpha(str[i])){
			alpha ++;
		}else if (isdigit(str[i])){
			digit++;
		}else{
			sp ++;
		}
	}
	printf("So ki tu la chu cai: %d\n", alpha);
	printf("So ki tu la so: %d\n", digit);
	printf("So ki tu dac biet %d\n", sp);
}

//	isalpha: kiem tra chu cai
// 	isdigit: keim tra chu so
