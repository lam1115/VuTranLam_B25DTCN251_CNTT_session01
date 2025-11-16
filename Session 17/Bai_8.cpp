#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int checkPassword(char password[], char result[]);
int main(){
	char pass[255], error[100];
	printf("Nhap vao mat khau cua ban: ");
	fgets(pass,sizeof(pass),stdin);
	pass[strcspn(pass,"\n")] = '\0';
	if(checkPassword(pass,error)){
		printf("\nPassword: %s hop le!",pass);
	}else{
		printf("\nPassword: %s khong hop le!",pass);
		printf("\nLoi: %s",error);
	}
}
int checkPassword(char password[], char result[]){
	if(strlen(password) < 8){
		strcpy(result,"Mat khau co do dai nho hon 8 ki tu!");
		return 0;
	}
	int n = strlen(password);
	int flag = 0;
	for(int i = 0; i < n; i++){
		if(password[i] >= 65 && password[i] <= 90){
			flag = 1;
			break;
		}
	}
	if(flag == 0){
		strcpy(result,"Mat khau phai chua it nhat 1 ki tu chu hoa!");
		return 0;
	}
	flag = 0;
	for(int i=0;i<n;i++){
		if(password[i] >= 97 && password[i] <= 122){
			flag = 1;
			break;
		}
	}
	if(flag == 0){
		strcpy(result,"Mat khau phai chua it nhat 1 ki tu chu thuong!");
		return 0;
	}
	flag = 0;
	for(int i=0;i<n;i++){
		if(password[i] >= '0' && password[i] <= '9'){
			flag = 1;
			break;
		}
	}
	if(flag==0){
		strcpy(result,"Mat khau phai chua it nhat 1 chu so!");
		return 0;
	}
	flag = 0;
	for(int i = 0; i < n; i++){
		if(password[i] == '!' || password[i] == '@' || password[i] == '#' || password[i] == '$' || password[i] == '%' || password[i] == '^' || password[i] == '&' || password[i] == '*' || password[i] == '~'){
			flag = 1;
			break;
		}
	}
	if(flag==0){
		strcpy(result,"Mat khau phai chua it nhat 1 ki tu dac biet!");
		return 0;
	}
	return 1;
}
  
