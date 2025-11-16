#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	char str[100];
	printf("Nhap chuoi: ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	
	int n =strlen(str);
	int i = 0;
	while(str[i] == ' '){
		for (int j = 0; j < n - 1; j ++){
			str[j] = str[j + 1];
		}
		str[n - 1]= '\0';
		n --;
	}
	int maxLengthWord = 0;
	while(i < n){
		int countWord = 0;
		while(str[i] != ' ' && i < n - 1){
			i ++;
			countWord ++;
		}
		while(i < n - 1 && str[i] == ' ');
		if (maxLengthWord < countWord)	{
			maxLengthWord = countWord;
		} 
	}
	printf("%d", maxLengthWord);
}
