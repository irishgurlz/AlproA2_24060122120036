/*
Nama Program  : nbulan
Deskripsi     : menuliskan ke layar nama-nama bulan dari nomor bulan, yaitu 1 s.d. 12 yang dibaca dari masukan keyboard
Nama Pembuat  : Aniqah Nursabrina
NIM           : 24060122120036
Tanggal       : 06/03/2023
*/
#include <stdio.h>
int  main(void){
    // Kamus Lokal
    int n;

    // Algoritma
    printf("Masukkan nomor bulan: ");
    scanf("%d", &n);

    switch(n){
        case 1:
            printf("Januari");
            break;
        case 2:
            printf("Februari");
            break;
        case 3:
            printf("Maret");
            break;
        case 4:
            printf("April");
            break;
        case 5:
            printf("Mei");
            break;
        case 6:
            printf("Juni");
            break;
        case 7:
            printf("Juli");
            break;
        case 8:
            printf("Agustus");
            break;
        case 9:
            printf("September");
            break;
        case 10:
            printf("Oktober");
            break;
        case 11:
            printf("November");
            break;
        case 12:
            printf("Desember");
        default:
            printf("Masukan nomor salah");
    }
}
