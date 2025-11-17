#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char inputString[100];
	char reverseString[100];
	char *pInput = inputString;
	char *pReverse = reverseString;
	printf("Nhap chuoi: ");
	fgets(inputString, sizeof(inputString), stdin);
	inputString[strcspn(inputString, "\n")] = '\0';
	for (int i = strlen(inputString) - 1; i >= 0; i--){
		*pReverse = *(pInput + i);
		pReverse ++;
	}
	*pReverse = '\0';
	printf("Chuoi ban dau: %s\n", inputString);
    printf("Chuoi dao nguoc: %s\n", reverseString);
}
