#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Bandara_Header.h"

void informasipenumpang (Penerbangan * isi){
    while (isi != NULL){
        	printf("=====Penumpang=====\n");
            printf("IDKTP\t\t: %s\n", isi->IDKTP);
	        printf("NAMA\t: %s\n", isi->NAMA);
			printf("VAKSIN\t: %s\n", isi->VAKSIN);
	        printf("=====Data Maskapai=====\n");
	        printf("MASKAPAI\t\t: %s\n", isi->MASKAPAI);
	        printf("RUTE\t: %s\n", isi->RUTE);
	        printf("NOMORKURSI\t\t: %s\n\n\n", isi->NOMORKURSI);
	        puts (" ");
	        isi = isi->ptrNextPenumpang;
        }
}

void SearchIDKTP (Penerbangan * isi, char * cari){
    while (isi != NULL){
        if(strcmp(isi->IDKTP, cari) == 0){
        	printf("=====Penumpang=====\n");
            printf("IDKTP\t\t: %s\n", isi->IDKTP);
	        printf("NAMA\t: %s\n", isi->NAMA);
			printf("VAKSIN\t: %s\n", isi->VAKSIN);
	        printf("=====Data Maskapai=====\n");
	        printf("MASKAPAI\t\t: %s\n", isi->MASKAPAI);
	        printf("RUTE\t: %s\n", isi->RUTE);
	        printf("NOMORKURSI\t\t: %s\n\n\n", isi->NOMORKURSI);
	        puts (" ");
        }
        isi = isi->ptrNextPenumpang;
    }
}
void BerdasarkanRute (Penerbangan * isi, char * Rute_penerbangan){
	while (isi !=NULL){
		if(strcmp(isi->MASKAPAI, Rute_penerbangan)==0){
	        printf("=====Penumpang=====\n");
            printf("IDKTP\t\t: %s\n", isi->IDKTP);
	        printf("NAMA\t: %s\n", isi->NAMA);
			printf("VAKSIN\t: %s\n", isi->VAKSIN);
	        printf("=====Data Maskapai=====\n");
	        printf("MASKAPAI\t\t: %s\n", isi->MASKAPAI);
	        printf("RUTE\t: %s\n", isi->RUTE);
	        printf("NOMORKURSI\t\t: %s\n\n\n", isi->NOMORKURSI);
		}
		isi = isi->ptrNextPenumpang;
	}
}

