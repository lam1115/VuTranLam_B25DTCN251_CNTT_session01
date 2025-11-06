#include <stdio.h>
#include <stdlib.h>
int main(){
	int choose;
	int n;
	int arr[100];
	int isInputed = 0;
	int isSorted = 0;
	float sum = 0;
	do{
		printf("\n----------Menu----------");
		printf("\n1.Nhap so gia tri phan tu");
		printf("\n2.In gia tri phan tu cua mang");
		printf("\n3.Tinh tong, trung binh cong");
		printf("\n4.Sap xep mang");
		printf("\n5.Tim kiem phan tu");
		printf("\n6.Xoa phan tu theo chi so phan tu");
		printf("\n7.Chen phan tu");
		printf("\n8.Xoa phan tu co gia tri bang gia tri nhap");
		printf("\n9.Thoat");
		printf("\nLua chon cua ban: ");
		scanf("%d", &choose);
		printf("\n------------------------");
		switch(choose){
			case 1:{
				do{
					printf("\nNhap so phan tu cua mang: ");
					scanf("%d", &n);
					if (n < 1 || n > 100){
						printf("Nhap lai so phan tu\n");
					}
				}while(n < 1 || n > 100);
				for (int i = 0; i < n; i++){
					printf("arr[%d] = ", i);
					scanf("%d", &arr[i]);
				}
				isInputed = 1;
				break;
			}
			case 2:{
				if (isInputed == 0){
					printf("\nMang chua duoc nhap\n");
				}else{
					printf("\nPhan tu cua mang: ");
					for (int i = 0; i < n; i++){
						printf("%d  ", arr[i]);
					}
				}
				break;
			}
			case 3:{
				if (isInputed == 0){
					printf("\nMang chua duoc nhap\n");
				}else{
					for (int i = 0; i < n; i++){
						sum += arr[i];
					}
					printf("\nTong cac phan tu trong mang: %.1f", sum);
					printf("\nTrung binh cong cac phan tu trong mang: %.1f", sum/n);
				}
				break;
			}
			case 4:{
				if (isInputed == 0){
					printf("\nMang chua duoc nhap\n");
				}else{
					int m;
					printf("\nChon cach sap xep: \n1.Bubble Sort\n2.Selection Sort\n3.Insertion Sort\n");
					scanf("%d", &m);
					switch(m){
						case 1:{
							for (int i = 0; i < n - 1; i++){
								for (int j = 0; j < n - i - 1; j++){
									if (arr[j + i] < arr[j]){
										int temp = arr[j];
										arr[j]= arr[j + 1];
										arr[j + 1] = temp;
									}
								}
							}
							isSorted = 1;
							printf("Mang tang dan: ");
							for (int i = 0; i < n; i++){
								printf("%d ", arr[i]);
							}
							break;
						}
						case 2:{
							for (int i = 0; i < n - 1; i++){
								int k = i;
								for (int j = i + 1; j < n; j++){
									if (arr[j] > arr[k]){
										k = j;
									}
								}
								if (k != i){
									int temp = arr[i];
									arr[i] = arr[k];
									arr[k] = temp;
								}
							}
							isSorted = 1;
							printf("Mang giam dan: ");
							for (int i = 0; i < n; i++){
								printf("%d ", arr[i]);
							}
							break;
						}
						case 3:{
							int i, key, j;
							for (int i = 1; i < n; i++){
								key = arr[i];
								j = i - 1;
								while(j >= 0 && arr[j] > key){
									arr[j + 1] = arr[j];
									j--;
								}
								arr[j + 1] = key;
							}
							isSorted = 1;
							printf("\nMang tang dan: ");
							for (int i = 0; i < n; i++){
								printf("%d ", arr[i]);
							}
							break;
						}
						default:
							printf("Nhap tu 1 - 3");
					}
				}
				break;
			}
			case 5:{
				if (isInputed == 0){
					printf("\nMang chua duoc nhap\n");
				}else{
					int value;
					printf("\nNhap gia tri can tim: ");
					scanf("%d", &value);
					if (isSorted == 0){
						printf("Gia tri %d xuat hien tai vi tri: ", value);
						for (int i = 0; i < n; i++){
							if (arr[i] == value){
								printf("%d", i + 1);
							}
						}
					}else{
						int left = 0, right = n - 1;
						while (left <= right){
							int mid = (left + right)/2;
							if (arr[mid] < value){
								left = mid + 1;
							}else{
								right = mid - 1;
							}
						}
						printf("Gia tri %d xuat hien tai vi tri: ");
						for (int i = 0; i < n; i++){
							printf("%d", i) + 1;
						}
					}
				}
				break;
			}
			case 6:{
				if (isInputed == 0){
					printf("\nMang chua duoc nhap\n");
				}else{
					int index;
					printf("\nNhap vi tri can xoa: ");
					scanf("%d", &index);
					if (index >= 0 && index < n){
						for (int i = index; i < n - 1; i ++){
							arr[i] = arr[i + 1];
						}
					}else{
						printf("Vi tri khong hop le: ");
					}
					n --;
				}
				break;
			}
			case 7:{
				if (isInputed == 0){
					printf("\nMang chua duoc nhap\n");
				}else{
					int index, value;
					printf("\nNhap vi tri can chen: ");
					scanf("%d", &index);
					printf("Nhap gia tri can chen: ");
					scanf("%d", &value);
					if (index >= 0 && index < n){
						for (int i = n; i > index; i --){
							arr[i] = arr[i - 1];
						}
						arr[index] = value;
						n ++;	
					}else if(index < 0){
						for (int i = n; i > 0; i--){
							arr[i] = arr[i - 1];
						}
						arr[0] = value;
						n++;
					}else if(index > n){
						for (int i = 0; i < n; i ++){
							arr[n] = value;
						}
						n ++;
					}
				}
				break;
			}
			case 8:{
				if (isInputed == 0){
					printf("\nMang chua duoc nhap\n");
				}else{
					int value;
					printf("\nNhap gia tri can xoa: ");
					scanf("%d", &value);
					int i = 0;
					while(i < n){
						if (arr[i] == value){
							for (int j = i; j < n - 1; j++){
								arr[j] = arr[j + 1];
								}
							n--;
						}else{
							i++;
						}
					}
				}
				break;
			}
			case 9:{
				exit(0);
				break;
			}
			default:
				printf("\nNhap tu 1 - 9");
		}
		char confirm;
        int check = 0;
        do {
            printf("\nBan co muon tiep tuc? (Y/N): ");
            getchar();
            scanf("%c", &confirm);
            if (confirm == 'Y' || confirm == 'y') {
                check = 1; //
            } else if (confirm == 'N' || confirm == 'n') {
                check = 1;
                break; 
            } else {
                printf("Nhap sai! Vui long nhap Y hoac N.\n");
            }
        } while (!check);
	}while(1);
}



