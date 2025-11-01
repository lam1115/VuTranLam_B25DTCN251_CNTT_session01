#include <stdio.h>
int main(){
	int n, arr[100];
	next:
	printf("Nhap so phan tu: ");
	scanf("%d", &n);
	if (n < 0){
		goto next;
	}
	for (int i = 0; i < n; i++){
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}

