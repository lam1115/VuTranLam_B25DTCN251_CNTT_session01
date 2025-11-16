#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	char str[100];
	printf("Nhap chuoi: ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	
	printf("Nhap ki tu can xoa: ");
	char ch = getchar();
	
	int n = strlen(str);
	for (int i = 0; i < n; i++){
		if (str[i] == ch){
			for (int j = i; j < n - 1; j++){
				str[j] = str[j + 1];
			}
			str[n - 1] = '\0';
			n --;
			i --;
		}
	}
	printf("\nChuoi sau khi xoa: %s", str);
}
