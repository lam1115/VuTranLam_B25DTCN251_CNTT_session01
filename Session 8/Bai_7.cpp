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
		while(1){
			printf("arr[%d] = ", i);
			scanf("%d", &arr[i]);
			if(arr[i] % 2 == 0){
				printf("Nhap lai\n");
			}else{
				break;
			}
		}
	}
}
