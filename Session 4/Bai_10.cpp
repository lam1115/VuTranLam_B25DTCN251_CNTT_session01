#include <stdio.h>
int main(){
	int cs1, cs2, cs3, S;
	printf("Nhap vao 3 so nguyen: ");
	scanf("%d%d%d", &cs1, &cs2, &cs3);
	if(cs1 > cs2){
		S = cs1;
		cs1 = cs2;
		cs2 = S;
	}
	if(cs2 > cs3){
		S = cs2;
		cs2 = cs3;
		cs3 = S;
	}
	if(cs1 > cs3){
		S = cs1;
		cs1 = cs3;
		cs3 = S;
	}
	if(cs1 > cs2){
		S = cs1;
		cs1 = cs2;
		cs2 = S;
	}
	if(cs2 > cs3){
		S = cs2;
		cs2 = cs3;
		cs3 = S;
	}
	if(cs1 > cs3){
		S = cs1;
		cs1 = cs3;
		cs3 = S;
	}
	printf("Thu tu tang dan: %d %d %d", cs1, cs2, cs3);
}

