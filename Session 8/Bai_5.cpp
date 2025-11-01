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
	int maxx = arr[0], minn = arr[0];
	for(int i = 1; i < n; i++){
		if(arr[i] < minn){
			minn = arr[i];
		}else if(arr[i] > maxx){
			maxx = arr[i];
		}
	}
	printf("Phan tu lon nhat: %d\n", maxx);
	printf("Phan tu nho nhat: %d\n", minn);
}
