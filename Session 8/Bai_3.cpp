#include <stdio.h>
int main(){
	int arr[5], ktra = 0;
	for (int i = 0; i < 5; i++){
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	printf("\nPhan tu la so chan\n");
	for(int i = 0; i < 5; i++){
		if(arr[i] % 2 == 0){
			printf("arr[%d] = %d \n",i ,arr[i]);
			ktra = 1;
		}
	}
	if (ktra == 0){
		printf("Mang khong co so chan");
	}
}
