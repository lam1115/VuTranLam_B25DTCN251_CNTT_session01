#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100

typedef struct listDish{
    int id;
    char name[50];
    double price;
}Dish;

void printMenu(Dish menu[], int count) {
    for (int i = 0; i < count; i++) {
        printf("%d. ID: %d | Name: %-10s | Price: %.2lf\n", i + 1, menu[i].id, menu[i].name, menu[i].price);
    }
}

void insertDish(Dish menu[], int *count) {
    if (*count >= MAX) {
        printf("Menu da day. Khong the them.\n");
    }
    int pos;
    printf("Nhap vi tri can them (0 den %d): ", *count);
    scanf("%d", &pos);
    if (pos < 0 || pos > *count) {
        printf("Vi tri khong hop le\n");
    }

    Dish newDish;
    newDish.id = (*count > 0) ? menu[*count - 1].id + 1 : 1;
    fflush(stdin);
    printf("Nhap ten mon: ");
    fgets(newDish.name, sizeof(newDish.name), stdin);
    newDish.name[strcspn(newDish.name, "\n")] = '\0';
    printf("Nhap gia: ");
    scanf("%lf", &newDish.price);

    for (int i = *count; i > pos; i--) {
        menu[i] = menu[i - 1];
    }
    menu[pos] = newDish;
    (*count)++;
}

void editDish(Dish menu[], int count) {
    int pos;
    printf("Nhap vi tri can sua (0 den %d): ", count - 1);
    scanf("%d", &pos);
    if (pos < 0 || pos >= count) {
        printf("Vi tri khong hop le.\n");
    }
    fflush(stdin);
    printf("Nhap ten moi: ");
    fgets(menu[pos].name, sizeof(menu[pos].name), stdin);
    menu[pos].name[strcspn(menu[pos].name, "\n")] = '\0';
    printf("Nhap gia moi: ");
    scanf("%lf", &menu[pos].price);
}

void deleteDish(Dish menu[], int *count) {
    int pos;
    printf("Nhap vi tri can xoa (0 den %d): ", *count - 1);
    scanf("%d", &pos);
    if (pos < 0 || pos >= *count) {
        printf("Vi tri khong hop le.\n");
    }
    for (int i = pos; i < *count - 1; i++) {
        menu[i] = menu[i + 1];
    }
    (*count)--;
}

int compareAsc(const void *a, const void *b) {
    return ((Dish *)a) -> price > ((Dish *)b) -> price;
}

int compareDesc(const void *a, const void *b) {
    return ((Dish *)a) -> price < ((Dish *)b) -> price;
}

void sortMenu(Dish menu[], int count) {
    char choice;
    printf("a. Giam dan theo price\n");
    printf("b. Tang dan theo price\n");
    printf("Lua chon: ");
    fflush(stdin);
    scanf("%c", &choice);
    if (choice == 'a') {
        for (int i = 0; i < count - 1; i++) {
            for (int j = 0; j < count - i - 1; j++) {
                if (menu[j].price < menu[j + 1].price) {
                    Dish temp = menu[j];
                    menu[j] = menu[j + 1];
                    menu[j + 1] = temp;
                }
            }
        }
        printf("Da sap xep giam dan theo price.\n");
    } else if (choice == 'b') {
        for (int i = 0; i < count - 1; i++) {
            for (int j = 0; j < count - i - 1; j++) {
                if (menu[j].price > menu[j + 1].price) {
                    Dish temp = menu[j];
                    menu[j] = menu[j + 1];
                    menu[j + 1] = temp;
                }
            }
        }
        printf("Da sap xep tang dan theo price.\n");
    } else {
        printf("Lua chon khong hop le.\n");
    }
}

void linearSearch(Dish menu[], int count) {
    char keyword[50];
    fflush(stdin);
    printf("Nhap ten mon can tim: ");
    fgets(keyword, sizeof(keyword), stdin);
    keyword[strcspn(keyword, "\n")] = '\0';

    int found = 0;
    for (int i = 0; i < count; i++) {
        if (strcmp(menu[i].name, keyword) == 0) {
            printf("Tim thay: ID: %d | Name: %s | Price: %.2lf\n", menu[i].id, menu[i].name, menu[i].price);
            found = 1;
        }
    }
    if (!found) {
        printf("Khong tim thay mon an.\n");
    }
}

int binarySearch(Dish menu[], int count, char *keyword) {
    int left = 0, right = count - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        int cmp = strcmp(menu[mid].name, keyword);
        if (cmp == 0) return mid;
        else if (cmp < 0) left = mid + 1;
        else right = mid - 1;
    }
}

void binarySearchWrapper(Dish menu[], int count) {
    char keyword[50];
    fflush(stdin);
    printf("Nhap ten mon can tim: ");
    fgets(keyword, sizeof(keyword), stdin);
    keyword[strcspn(keyword, "\n")] = '\0';

    qsort(menu, count, sizeof(Dish), compareAsc);
    int index = binarySearch(menu, count, keyword);
    if (index != -1) {
        printf("Tim thay: ID: %d | Name: %s | Price: %.2lf\n", menu[index].id, menu[index].name, menu[index].price);
    } else {
        printf("Khong tim thay mon an.\n");
    }
}

int main() {
    Dish menu[MAX] = {
        {1, "Pho", 30000},
        {2, "Bun bo", 35000},
        {3, "Com tam", 40000},
        {4, "Hu tieu", 32000},
        {5, "Banh mi", 20000}
    };
    int count = 5;
    int choose;

    do {
        printf("\n----------MENU----------\n");
        printf("1. In danh sach mon an\n");
        printf("2. Them mon an vao vi tri chi dinh\n");
        printf("3. Sua mon an o vi tri chi dinh\n");
        printf("4. Xoa mon an o vi tri chi dinh\n");
        printf("5. Sap xep theo gia\n");
        printf("6. Tim kiem theo ten\n");
        printf("7. Thoat\n");
        printf("Lua chon: ");
        scanf("%d", &choose);

        switch (choose) {
            case 1:
                printMenu(menu, count);
                break;
            case 2:
                insertDish(menu, &count);
                break;
            case 3:
                editDish(menu, count);
                break;
            case 4:
                deleteDish(menu, &count);
                break;
            case 5:
                sortMenu(menu, count);
                break;
            case 6: {
                char subChoice;
                printf("a. Tim kiem tuyen tinh\n");
                printf("b. Tim kiem nhi phan\n");
                printf("Lua chon: ");
                getchar();
                scanf("%c", &subChoice);
                if (subChoice == 'a') linearSearch(menu, count);
                else if (subChoice == 'b') binarySearchWrapper(menu, count);
                else printf("Lua chon khong hop le.\n");
                break;
            }
            case 7:
                exit(0);
                break;
            default:
                printf("Nhap tu 1 - 7\n");
        }
    } while (1);
}
