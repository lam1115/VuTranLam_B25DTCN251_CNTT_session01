#include <stdio.h>
#include <stdlib.h>
int main(){
	int choose;
	int arr[100];
	int n = 0;
	int x;
	int kieuchen;
	int vtri;
	int value;
	int found = 0;
	
	while(1){
		printf("\n--------------------Quan ly danh sach so nguyen--------------------");
		printf("\n1.Them phan tu vao vi tri bat ky.");
		printf("\n2.Xoa phan tu o vi tri bat ky.");
		printf("\n3.Cap nhat gia tri tai vi tri bat ky.");
		printf("\n4.Tim kiem phan tu trong mang.");
		printf("\n5.Hien thi mang.");
		printf("\n6.Thoat.");
		printf("\nLua chon cua ban: ");
		scanf("%d", &choose);
		
		switch(choose){
			case 1:
				printf("Nhap phan tu can them: ");
				scanf("%d", &x);
				
				printf("Ban muon them vao dau: \n1.Dau\n2.Cuoi\n3.Vi tri bat ky\n");
				scanf("%d", &kieuchen);
				switch(kieuchen){
					case 1:
						if (n == 0){
							arr[n] = x;
							n ++;
						}else if(n >= 100){
							printf("Mang da day");
						}else{
							for (int i = n; i > 0; i--){
								arr[i] = arr[i - 1];
							}
							arr[0] = x;
							n ++;
						}
						break;
					case 2:
						if(n >= 100){
							printf("Mang da day");
						}else{
							arr[n] = x;
							n ++;
						}
						break;
					case 3:
						if (n == 0){
							arr[n] = x;
							n ++;
						}else if (n == 100){
							printf("Mang da day");
						}else{
							printf("Nhap vi tri can chen: ");
							scanf("%d", &vtri);
							if(vtri > 0 && vtri < n){
								for(int j = n; j > vtri; j--){
									arr[j] = arr[j - 1];
								}
								arr[vtri] = x;
								n ++;
							}else{
								printf("Vi tri can chen khong hop le\n");
							}
						}
						break;
					default:
						printf("Nhap tu 1 - 3");
				}
				break;
			case 2:
				printf("Nhap vi tri can xoa: ");
				scanf("%d", &x);
				for (int i = x; i < n - 1; i++){
					arr[i] = arr[i + 1];
				}
				n --;
				break;
			case 3:
				printf("Nhap gia tri can thay the: ");
				scanf("%d", &x);
				printf("Chon vi tri can thay the: ");
				scanf("%d", &vtri);
				if(vtri > 0 && vtri < n){
					for (int i = 0; i < vtri; i++){
						if (arr[i] == arr[vtri]){
							arr[vtri] = x;
						}
					}
				}else{
					printf("Vi tri khong hop le\n");
				}
				break;
			case 4:
				printf("Nhap gia tri can tim: ");
				scanf("%d", &value);
				for (int i = n; i > 0; i--){
					if(arr[i] == value){
						found ++;
					}
				}
				printf("Gia tri %d xuat hien %d lan.", value, found);
				if(found > 0){
					printf("\nTai cac vi tri: \n");
					for(int j = 0; j < n; j ++){
						if(arr[j] == value){
							printf("%5d", j);
						}
					}
				}
				break;
			case 5:
				printf("\nPhan tu cua mang: \n");
				for (int i = 0; i < n; i ++){
					printf("%5d",arr[i]);
				}
				break;
			case 6:
				exit(0);
				break;
			default:
				printf("Nhap tu 1 - 6");
		}
	}
}
