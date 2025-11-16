#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
	char str1[100], str2[100];
	printf("Nhap chuoi thu nhat: ");
	fgets(str1, sizeof(str1), stdin);
	printf("Nhap chuoi thu hai: ");
	fgets(str2, sizeof(str2), stdin);
	for (int i = 0; i < strlen(str1); i ++){
		str1[i] = towupper(str1[i]);
	}
	for (int i = 0; i < strlen(str2); i ++){
		str2[i] = towupper(str2[i]);
	}
	int result = strcmp(str1, str2);
	if (result == 0){
		printf("Chuoi giong nhau");
	}else{
		printf("Chuoi khac nhau");
	}
}
