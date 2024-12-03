#include<stdio.h>

int main(){
	
	
	while (1){
		printf("|nMenu|n");
		printf("1.Nhap phan tu can nhap va cac gia tri phan tu\n ");
		printf("2.In ra gia tri cac phan tu dang quan ly\n");
		printf("3.In ra cac gia tri lon nhat cua mang\n");
		printf("4.In ra cac phan tu la so nguyen to trong mang\n");
		printf("5.Them mot phan tu vao trong mang\n");
		printf("6.Xoa mot phan tu trong mang\n");
		printf("7.Sap xep mang theo thu tu tang dan\n");
		printf("8.Tim kiem phan tu (nhap nguoi dung) va in ra vi tri index cua phan tu do\n");
		printf("9.Thoat\n");
		scanf("%d",&choice);
		
		if(choice==9){
			break
		}
	    switch(choice){
	    case 1:
				printf("Moi ban nhap so phan tu can nhap : ");
				scanf("%d",&gioihan);
				for(int i = 0; i < gioihan; i++ ){
					printf("Xin moi nhap ki tu : ");
					scanf("%d",&arr[i]);
				}
				break;
			case 2:
				printf("\nCac gia tri trong mang");
				for(int i = 0; i < gioihan; i++){
					printf("%2d",arr[i]);
				}
				break;
			case 3:
				int max;
				for(int i = 0; i < gioihan; i++){
					if(max<arr[i]){
						max=arr[i];
					}
				}
				printf("\nGia tri lon nhat trong mang la : %d",max);
				break;
			case 4:
				int songuyento;
				printf("\nSo nguyen to co trong mang : ");
				for(int i = 0; i < gioihan; i++){
					if( arr[i]%2!=0 && arr[i]%3!=0 && arr[i]%5!=0){
						songuyento = arr[i];
						printf("%3d",songuyento);
					}
				}
				break;
			case 5:
				int vitri;
				printf("Ban muon them phan tu nao vao trong mang : ");
				scanf("%d",&kitu);
				printf("Vi tri ban muon them phan tu vao mang : ");
				scanf("%d",&vitri);
				while(vitri<0 || vitri>gioihan){
					scanf("%d",&vitri);
				}
				for(int i = gioihan; i > vitri; i--){
					arr[i] = arr[i - 1];
				}
				arr[vitri] = kitu;
				printf("Mang sau khi them gia tri theo yeu cau : ");
				for(int i = 0; i < gioihan + 1 ; i++){
					printf("%3d",arr[i]);
				}
				break;
			case 6:
				printf("Ban muon xoa phan tu bao nhieu trong mang : ");
				scanf("%d",&vitri);
				while(vitri < 0 || vitri > gioihan){
					scanf("%d",&vitri);
				}
				for( int i = vitri; i < gioihan; i++ ){
					arr[i] = arr[i + 1];
				}
				printf("\nMang sau khi duoc chinh sua : ");
				for(int i = 0; i < gioihan ; i++){
					printf("%3d",arr[i]);
				}
				break;
			case 7:
				for( int i = 0; i < gioihan -1 ; i++ ){
					for( int j = 0; j < gioihan - i - 1; j++){
						if(arr[j] > arr[j +1]){
						int temp = arr[j];
						arr[j] = arr[j + 1];
						arr[j + 1] = temp;
						}
					}
				}
				printf("\nMang sau khi duoc sap xep theo trinh tu : ");
				for( int i = 0; i < gioihan ; i++){
					printf("%3d",arr[i]);
				}
				break;
			case 8:
				printf("Ban muon tim kiem phan tu nao trong mang : ");
				scanf("%d",&kitu);
				for(int i = 0; i < gioihan; i++){
					if(kitu == arr[i]){
						check++;
						vitri = i;
						break;
					}
				}
				if(check!=-1){
					printf("Phan tu ban dang tim kiem ( %d ) nam o vi tri %d trong mang",kitu,vitri);
				}else{
					printf("Phan tu khong ton tai trong mang");
				}
				break;
			case 9:
				printf("Dang roi khoi chuong trinh");
				return 0;
		}
	}
	//ket thuc chuong trinh
	return 0;
}


}

