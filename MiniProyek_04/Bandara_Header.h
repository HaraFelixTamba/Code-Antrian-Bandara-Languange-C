#ifndef PENERBANGAN_HEADER
#define PENERBANGAN_HEADER

typedef struct SPenerbangan Penerbangan;

struct SPenerbangan{
    char IDKTP[30];
    char NAMA[30];
    char MASKAPAI[30];
    char VAKSIN[30];
    char NOMORKURSI[30];
    char RUTE[30];
    Penerbangan * ptrNextPenumpang;
};

void BerdasarkanRute (Penerbangan * isi, char * Rute_penerbangan);
void informasipenumpang (Penerbangan * isi);
void SearchIDKTP (Penerbangan * isi, char * cari);


#endif
