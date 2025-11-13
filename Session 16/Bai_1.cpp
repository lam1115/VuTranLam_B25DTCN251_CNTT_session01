#include <stdio.h>
#include <string.h>
int main(){
	char str[100];
	printf("Nhap chuoi: ");
	fgets(str, sizeof(str), stdin);
	int length = strlen(str);
	str[strcspn(str, "\n")] = '\0';
	printf("\nChuoi vua nhap: %s", str);
	printf("\nDo dai chuoi: %d", length);
}


