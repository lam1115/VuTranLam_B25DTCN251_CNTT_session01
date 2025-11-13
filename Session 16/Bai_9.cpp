#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
	printf("Nhap chuoi: ");
	fgets(str, sizeof(str), stdin);
	char n;
	scanf("Nhap ki tu can xoa: %c", &n);
    int i, j = 0;
    for (i = 0; i < strlen(str); i++) {
        if (str[i] != n) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0'; 

    printf("Chuoi sau khi xoa '%c': %s\n", n, str);
    return 0;
}
