#include <stdio.h>
int main(){
	int length, width, P, C;
	scanf("%d%d", &length, &width);
	if(length > 0 && width > 0){
		P = (length + width)*2;
		C = length * width;
	printf("%d""\n", P);
	printf("%d", C);
	}
	else{
		printf("Hinh hoc khong am");	
	}

}
