#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char kyTu[100];
    int dem[100];
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
        char c = str[i];
        int found = 0;
        for (int j = 0; j < count; j++) {
            if (kyTu[j] == c) {
                dem[j] ++;
                found = 1;
                break;
            }
        }
        if (!found) {
            kyTu[count] = c;
            dem[count] = 1;
            count ++;
        }
    }
    for (int i = 0; i < count; i++) {
        printf("%c: %d\n", kyTu[i], dem[i]);
    }
}
