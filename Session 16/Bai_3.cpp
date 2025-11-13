#include <stdio.h>
#include <string.h>
int main(){
	char str[100];
	printf("Nhap chuoi: ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	int length = strlen(str);
	for (int i = length; i >= 0; i --){
		printf("%c", str[i]);
	}
}

