#include <stdio.h>
#include <string.h>
int main(){
	char str[100];
	printf("Nhap chuoi: ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	int flag = 1;
	int n = strlen(str);
	for (int i = 0; i < n; i++){
		if (str[i] != str[n - i - 1]){
			flag = 0;
			break;
		}
	}
	if (flag == 1){
		printf("La Palindrome");
	}else{
		printf("Khong la Palindrome");
	}
}    
