#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

typedef struct {
    char maSach[20];
    char tenSach[50];
    char tacGia[50];
    float giaTien;
} Sach;

Sach ds[MAX];
int n = 0;
void nhapDanhSach() {
    printf("Nhap so luong sach: ");
    scanf("%d", &n);
    fflush(stdin);
    for (int i = 0; i < n; i++) {
        printf("\n--- Sach %d ---\n", i+1);
        printf("Ma sach: "); 
		fgets(ds[i].maSach, sizeof(ds[i].maSach), stdin); 
		ds[i].maSach[strcspn(ds[i].maSach, "\n")] = 0;
		
        printf("Ten sach: "); 
		fgets(ds[i].tenSach, sizeof(ds[i].tenSach), stdin); 
		ds[i].tenSach[strcspn(ds[i].tenSach, "\n")] = 0;
		
        printf("Tac gia: "); 
		fgets(ds[i].tacGia,	sizeof(ds[i].tacGia), stdin); 
		ds[i].tacGia[strcspn(ds[i].tacGia, "\n")] = 0;
		
        printf("Gia tien: "); 
		scanf("%f", &ds[i].giaTien); 
		fflush(stdin); 
    }
}
void hienThi() {
    printf("\n--------------DANH SACH SACH-------------\n");
    for (int i = 0; i < n; i++) {
        printf("%d. Ma: %5s | Ten: %10s | Tac gia: %10s | Gia: %.2f |\n", i+1, ds[i].maSach, ds[i].tenSach, ds[i].tacGia, ds[i].giaTien);
    }
}
void themSach() {
    if (n >= MAX) {
        printf("Danh sach day!\n");
        return;
    }
    int pos;
    printf("Nhap vi tri muon them (0-%d): ", n);
    scanf("%d", &pos); 
	fflush(stdin);
    if (pos < 0 || pos > n){
    	pos = n;
	}
    Sach s;
    printf("Ma sach: "); 
	fgets(s.maSach, sizeof(s.maSach), stdin); 
	s.maSach[strcspn(s.maSach, "\n")] = 0;
	
    printf("Ten sach: "); 
	fgets(s.tenSach, sizeof(s.tenSach), stdin); 
	s.tenSach[strcspn(s.tenSach, "\n")] = 0;
	
    printf("Tac gia: "); 
	fgets(s.tacGia, sizeof(s.tacGia), stdin); 
	s.tacGia[strcspn(s.tacGia, "\n")] = 0;
	
    printf("Gia tien: "); 
	scanf("%f", &s.giaTien);
	fflush(stdin);

    for (int i = n; i > pos; i--) {
        ds[i] = ds[i-1];
    }
    ds[pos] = s;
    n++;
}

void xoaSach() {
    char ma[20];
    printf("Nhap ma sach can xoa: ");
    fgets(ma, 20, stdin); 
	ma[strcspn(ma, "\n")] = 0;
	
    for (int i = 0; i < n; i++) {
        if (strcmp(ds[i].maSach, ma) == 0) {
            for (int j = i; j < n-1; j++) {
                ds[j] = ds[j+1];
            }
            n--;
            printf("Da xoa sach co ma %s\n", ma);
        }
    }
    printf("Khong tim thay ma sach!\n");
}

void capNhat() {
    char ma[20];
    printf("Nhap ma sach can cap nhat: ");
    fgets(ma, 20, stdin); 
	ma[strcspn(ma, "\n")] = 0;
	
    for (int i = 0; i < n; i++) {
        if (strcmp(ds[i].maSach, ma) == 0) {
            printf("Nhap ten moi: "); 
			fgets(ds[i].tenSach, sizeof(ds[i].tenSach), stdin); 
			ds[i].tenSach[strcspn(ds[i].tenSach, "\n")] = 0;
			
            printf("Nhap tac gia moi: "); 
			fgets(ds[i].tacGia, sizeof(ds[i].tacGia), stdin); 
			ds[i].tacGia[strcspn(ds[i].tacGia, "\n")] = 0;
			
            printf("Nhap gia moi: "); 
			scanf("%f", &ds[i].giaTien); 
			fflush(stdin);
			
            printf("Cap nhat thanh cong!\n");
        }
    }
    printf("Khong tim thay ma sach!\n");
}

void sapXep(int tang) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((tang && ds[i].giaTien > ds[j].giaTien) ||
                (!tang && ds[i].giaTien < ds[j].giaTien)) {
                Sach tmp = ds[i];
                ds[i] = ds[j];
                ds[j] = tmp;
            }
        }
    }
    printf("Da sap xep xong!\n");
}

void timKiem() {
    char ten[50];
    printf("Nhap ten sach can tim: ");
    fgets(ten, 50, stdin); 
	ten[strcspn(ten, "\n")] = 0;
	
    for (int i = 0; i < n; i++) {
        if (strcmp(ds[i].tenSach, ten) == 0){
            printf("Tim thay: %s - Tac gia: %s - Gia: %.2f\n", ds[i].tenSach, ds[i].tacGia, ds[i].giaTien);
        }
    }
}

int main() {
    int choice;
    do {
        printf("\n-------------MENU--------------\n");
        printf("1. Nhap so luong va thong tin sach\n");
        printf("2. Hien thi thong tin sach\n");
        printf("3. Them sach vao vi tri\n");
        printf("4. Xoa sach theo ma\n");
        printf("5. Cap nhat thong tin sach theo ma\n");
        printf("6. Sap xep sach theo gia (tang/giam)\n");
        printf("7. Tim kiem sach theo ten\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        fflush(stdin);

        switch(choice) {
            case 1: 
				nhapDanhSach(); 
			break;
            case 2: 
				hienThi(); 
			break;
            case 3: 
				themSach(); 
			break;
            case 4: 
				xoaSach(); 
			break;
            case 5: 
				capNhat(); 
			break;
            case 6: {
                int k; 
				printf("1. Tang | 2. Giam: "); 
				scanf("%d", &k); 
				fflush(stdin);
                sapXep(k == 1);
            break;
            }
            case 7: 
				timKiem(); 
			break;
            case 8: 
            	exit(0);
				printf("Thoat chuong trinh.\n");
				break;
            default: printf("Nhap tu 1 - 8\n");
        }
    } while (1);
}
