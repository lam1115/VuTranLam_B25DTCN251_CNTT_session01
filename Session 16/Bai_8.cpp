#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
	char str[100];
	printf("Nhap chuoi: ");
	fgets(str, sizeof(str), stdin);
	int i = 0;
	while(str[i] != '\0'){
		if (i == 0 || str[i - 1] == ' ' && str[i] != ' ' ){
			str[i] = toupper(str[i]);
	//		str[i] = str[i] - 32;
		}
		i++;
	}
	printf("%s", str);
}



