#include <stdio.h>
int main(){
	int arr[5];
	for(int i = 0; i < 5; i++){
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	for(int i = 0; i < 5; i++){
		if(arr[i] % 2 == 0){
			arr[i] += 3;
		}else{
			arr[i] += 2;
		}
		printf("%d", arr[i]);
	}
}

