#include <stdio.h>
int main(){
	short a = 32766;//So nguyen nho, 2 byte
	int b = 2147483646;//So nguyen, 4 byte
	long c = 6875808;//So nguyen lon hon 4 byte nho hon 8 byte
	long long d = 9223372036854775806;//So nguyen, 8 byte
	unsigned short e = 65534;//So nguyen duong, 2 byte
	unsigned int f = 4294967294;//So nguyen duong, 4 byte
	unsigned long g = 709551615;//So nguyen duong lon hon 4 byte nho hon 8 byte
	unsigned long long h = 18446744073709551614;// So nguyen duong, 8 byte
	char A = 'A';//So nguyen, ki tu, 1 byte
	printf("Short: %hi\n", a);
	printf("Int: %d\n", b);
	printf("Long: %ld\n", c);
	printf("Longlong: %lld\n", d);
	printf("Ulonglong: %hu\n", e);
	printf("Uint: %u\n", f);
	printf("Ulong: %lu\n", g);
	printf("Ulonglong: %llu\n", h);
	printf("Char: %c", A);
}
