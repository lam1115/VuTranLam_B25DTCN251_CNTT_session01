#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
	char str[100];
	printf("Nhap chuoi: ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	printf("\nChuoi ban dau: %s", str);
	
	for (int i = 0; i < strlen(str); i++){
		str[i] = towupper(str[i]);
	}
	printf("\nChuoi luc sau: %s", str);
}

