#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	char str1[100], str2[100];
	printf("Nhap chuoi thu nhat: ");
	fgets(str1, sizeof(str1), stdin);
	str1[strcspn(str1, "\n")] = '\0';
	printf("Nhap chuoi thu hai: ");
	fgets(str2, sizeof(str2), stdin);
	str2[strcspn(str2, "\n")] = '\0';
	int found = 0;
	int i, j;
	for(i = 0; i <= strlen(str1) - strlen(str2); i++){
		for (j = 0; j < strlen(str2); j++){
			if (str1[i + j] != str2[j]){
				break;
			}
		}
		if (j == strlen(str2)){
			found = 1;
			break;
		}
	}
	if (found){
		printf("\nCo");
	}else{
		printf("\nKhong");
	}
}
