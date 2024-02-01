#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Bandara_Header.h"

int main() {
   	Penerbangan * penumpang1 = (Penerbangan *)calloc(1,sizeof(Penerbangan));
   	Penerbangan * penumpang2 = (Penerbangan *)calloc(1,sizeof(Penerbangan));
   	Penerbangan * penumpang3 = (Penerbangan *)calloc(1,sizeof(Penerbangan));
   	Penerbangan * penumpang4 = (Penerbangan *)calloc(1,sizeof(Penerbangan));
   	Penerbangan * penumpang5 = (Penerbangan *)calloc(1,sizeof(Penerbangan));

    strcpy(penumpang1->IDKTP, "13321020");
    strcpy(penumpang1->NAMA, "Kezia");
    strcpy(penumpang1->MASKAPAI, "Garuda");
    strcpy(penumpang1->VAKSIN, "Vaksin 1, Vaksin 2, Vaksin 3");
	strcpy(penumpang1->NOMORKURSI, "1");
	strcpy(penumpang1->RUTE, "JAMBI");
    penumpang1->ptrNextPenumpang = penumpang2;

    strcpy(penumpang2->IDKTP, "13321022");
    strcpy(penumpang2->NAMA, "Haratama");
    strcpy(penumpang2->MASKAPAI, "Lion");
    strcpy(penumpang2->VAKSIN, "Vaksin 1, Vaksin 2");
	strcpy(penumpang2->NOMORKURSI, "4");
	strcpy(penumpang2->RUTE, "JAKARTA");
    penumpang2->ptrNextPenumpang = penumpang3;

    strcpy(penumpang3->IDKTP, "13321027");
    strcpy(penumpang3->NAMA, "Maruli");
    strcpy(penumpang3->MASKAPAI, "Airbus");
    strcpy(penumpang3->VAKSIN, "Vaksin 1, Vaksin 2, Vaksin 3");
	strcpy(penumpang3->NOMORKURSI, "5");
	strcpy(penumpang3->RUTE, "MEDAN");
    penumpang3->ptrNextPenumpang = penumpang4;

    strcpy(penumpang4->IDKTP, "13321008");
    strcpy(penumpang4->NAMA, "Dion");
    strcpy(penumpang4->MASKAPAI, "Garuda");
    strcpy(penumpang4->VAKSIN, "Vaksin 1, Vaksin 2, Vaksin 3");
	strcpy(penumpang4->NOMORKURSI, "20");
	strcpy(penumpang4->RUTE, "JAMBI");
    penumpang4->ptrNextPenumpang = penumpang5;
    
    strcpy(penumpang5->IDKTP, "13321003");
    strcpy(penumpang5->NAMA, "Sinta");
    strcpy(penumpang5->MASKAPAI, "Airbus");
    strcpy(penumpang5->VAKSIN, "Vaksin 1, Vaksin 2, Vaksin 3");
	strcpy(penumpang5->NOMORKURSI, "20");
	strcpy(penumpang5->RUTE, "MEDAN");
    penumpang5->ptrNextPenumpang = NULL;
    

	menu: 
	printf("\n=====Pencarian Penumpang=====\n");
	
	printf("1. Mencari informasi penumpang berdasarkan ID KTP\n");
	printf("2. Tampilkan informasi penumpang rute pesawat dan maskapai penerbangan\n");
	printf("3. Tampilkan seluruh informasi penumpang\n");
	printf("4. Keluar\n\n");

	int pil;	
	printf("Masukkan Pilihan Menu : ");
	scanf("%d", &pil);
	
	if(pil==1){
    	char cari[100];
    	printf("Cari berdasarkan ID KTP: ");
    	scanf(" %[^\t\n]s", &cari);
    	SearchIDKTP(penumpang1, cari);
    	goto menu;
	}else if(pil==2){
		char Rute_penerbangan[100];
		printf("Masukkan Maskapai: ");
		scanf(" %[^\t\n]s", &Rute_penerbangan);
		BerdasarkanRute(penumpang1, Rute_penerbangan);
		goto menu;
	}else if(pil==3){
		informasipenumpang(penumpang1);
		goto menu;
	}else if(pil==4){
		printf("\nTerimakasih Sudah Berkunjung!!\n");
	}else{
		exit(0);
	}

    return 0;
}
