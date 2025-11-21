#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

typedef struct {
    char maSP[20];
    char tenSP[50];
    float giaNhap;
    float giaBan;
    int soLuong;
} SanPham;

SanPham ds[MAX];
int n = 0;
float doanhThu = 0;
int timTheoMa(char ma[]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(ds[i].maSP, ma) == 0) 
		return i;
    }
    return -1;
}

void nhapDanhSach() {
    printf("Nhap so luong san pham: ");
    scanf("%d", &n); 
	fflush(stdin);
    for (int i = 0; i < n; i++) {
        printf("\n--- San pham %d ---\n", i+1);
        printf("Ma SP: "); 
		fgets(ds[i].maSP, 20, stdin); 
		ds[i].maSP[strcspn(ds[i].maSP, "\n")] = 0;
		
        printf("Ten SP: "); 
		fgets(ds[i].tenSP, 50, stdin); 
		ds[i].tenSP[strcspn(ds[i].tenSP, "\n")] = 0;
		
        printf("Gia nhap: "); 
		scanf("%f", &ds[i].giaNhap);
		
        printf("Gia ban: "); 
		scanf("%f", &ds[i].giaBan);
		
        printf("So luong: "); 
		scanf("%d", &ds[i].soLuong); 
		fflush(stdin);
        doanhThu -= ds[i].soLuong * ds[i].giaNhap;
    }
}


void hienThi() {
    printf("\n----------------DANH SACH SAN PHAM-----------------\n");
    for (int i = 0; i < n; i++) {
        printf("%d. Ma: %5s | Ten: %10s | Gia nhap: %.2f | Gia ban: %.2f | SL: %5d\n", i+1, ds[i].maSP, ds[i].tenSP, ds[i].giaNhap, ds[i].giaBan, ds[i].soLuong);
    }
}

void nhapSanPham() {
    SanPham sp;
    printf("Ma SP: "); 
	fgets(sp.maSP, 20, stdin); 
	sp.maSP[strcspn(sp.maSP, "\n")] = 0;
	
    int idx = timTheoMa(sp.maSP);
    if (idx != -1) {
        int sl;
        printf("San pham da ton tai. Nhap so luong them: ");
        scanf("%d", &sl); 
		fflush(stdin);
        ds[idx].soLuong += sl;
        doanhThu -= sl * ds[idx].giaNhap;
    } else {
        printf("Ten SP: "); 
		fgets(sp.tenSP, 50, stdin); 
		sp.tenSP[strcspn(sp.tenSP, "\n")] = 0;
		
        printf("Gia nhap: "); 
		scanf("%f", &sp.giaNhap);
		
        printf("Gia ban: "); 
		scanf("%f", &sp.giaBan);
		
        printf("So luong: "); 
		scanf("%d", &sp.soLuong); 
		fflush(stdin);
        ds[n++] = sp;
        doanhThu -= sp.soLuong * sp.giaNhap;
    }
}

void capNhat() {
    char ma[20];
    printf("Nhap ma SP can cap nhat: ");
    fgets(ma, 20, stdin); 
	ma[strcspn(ma, "\n")] = 0;
	
    int idx = timTheoMa(ma);
    if (idx != -1) {
        printf("Ten moi: "); 
		fgets(ds[idx].tenSP, 50, stdin); 
		ds[idx].tenSP[strcspn(ds[idx].tenSP, "\n")] = 0;
		
        printf("Gia nhap moi: "); 
		scanf("%f", &ds[idx].giaNhap);
		
        printf("Gia ban moi: "); 
		scanf("%f", &ds[idx].giaBan);
		
        printf("So luong moi: "); 
		scanf("%d", &ds[idx].soLuong); 
		fflush(stdin);
        printf("Cap nhat thanh cong!\n");
    } else {
        printf("Khong tim thay san pham!\n");
    }
}

void sapXep(int tang) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((tang && ds[i].giaBan > ds[j].giaBan) ||
                (!tang && ds[i].giaBan < ds[j].giaBan)) {
                SanPham tmp = ds[i];
                ds[i] = ds[j];
                ds[j] = tmp;
            }
        }
    }
    printf("Da sap xep xong!\n");
}

void timKiem() {
    char ten[50];
    printf("Nhap ten SP can tim: ");
    fgets(ten, 50, stdin); 
	ten[strcspn(ten, "\n")] = 0;
	
    for (int i = 0; i < n; i++) {
        if (strcmp(ds[i].tenSP, ten) == 0) {
            printf("Tim thay: %s - Gia ban: %.2f - SL: %d\n", ds[i].tenSP, ds[i].giaBan, ds[i].soLuong);
        }
    }
}

void banSanPham() {
    char ma[20];
    int sl;
    printf("Nhap ma SP can ban: ");
    fgets(ma, 20, stdin); 
	ma[strcspn(ma, "\n")] = 0;
	
    int idx = timTheoMa(ma);
    if (idx == -1) {
        printf("Khong tim thay san pham!\n");
        return;
    }
    if (ds[idx].soLuong == 0) {
        printf("Het hang!\n");
        return;
    }
    printf("Nhap so luong can ban: ");
    scanf("%d", &sl); 
	fflush(stdin);
	
    if (sl > ds[idx].soLuong) {
        printf("Khong con du hang!\n");
    } else {
        ds[idx].soLuong -= sl;
        doanhThu += sl * ds[idx].giaBan;
        printf("Ban thanh cong!\n");
    }
}

void hienThiDoanhThu() {
    printf("Doanh thu hien tai: %.2f\n", doanhThu);
}

int main() {
    int choice;
    do {
        printf("\n-----------------MENU-----------------\n");
        printf("1. Nhap so luong va thong tin san pham\n");
        printf("2. Hien thi danh sach san pham\n");
        printf("3. Nhap san pham\n");
        printf("4. Cap nhat thong tin san pham\n");
        printf("5. Sap xep san pham theo gia (tang/giam)\n");
        printf("6. Tim kiem san pham\n");
        printf("7. Ban san pham\n");
        printf("8. Doanh thu hien tai\n");
        printf("9. Thoat\n");
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
				nhapSanPham(); 
			break;
            case 4: 
				capNhat(); 
			break;
            case 5: {
                int k; 
				printf("1. Tang | 2. Giam: "); 
				scanf("%d", &k); 
				fflush(stdin);
                sapXep(k == 1);
            break;
            }
            case 6: 
				timKiem(); 
			break;
            case 7: 
				banSanPham(); 
			break;
            case 8: 
				hienThiDoanhThu(); 
			break;
            case 9: 
            	exit(0);
				printf("Thoat chuong trinh.\n"); 
			break;
            default: 
				printf("Nhap tu 1 - 9\n");
        }
    } while (1);
}
