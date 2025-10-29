#include <stdio.h>
int main(){
	int n = 1, s, i;
	while(n <= 10){
		i = 1;
		while(i <= 10){
			s = n * i;
			printf("%d * %d = %d\n", n, i, s);
			i ++;
		}
		n++;
	}
}
