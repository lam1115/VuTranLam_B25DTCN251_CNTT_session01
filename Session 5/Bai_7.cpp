#include <stdio.h>
#include <Ctype.h>
int main(){
	char kitu;
	printf("Nhap ki tu duy nhat: ");
	scanf("%c", &kitu);
	if(isupper(kitu)){
		kitu += 32;
		printf("%c", kitu);
	}else{
		kitu -= 32;
		printf("%c", kitu);
	}
}

