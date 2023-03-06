/*
Nama Program  : nhari
Deskripsi     : menuliskan ke layar nama-nama hari dari nomor hari, yaitu 1 s.d. 7 yang dibaca dari masukan keyboard
Nama Pembuat  : Aniqah Nursabrina
NIM           : 24060122120036
Tanggal       : 06/03/2023
*/
#include <stdio.h>
int  main(void){
    // Kamus Lokal
    int n;

    // Algoritma
    printf("Masukkan nomor hari: ");
    scanf("%d", &n);

    switch(n){
        case 1:
            printf("Senin");
            break;
        case 2:
            printf("Selasa");
            break;
        case 3:
            printf("Rabu");
            break;
        case 4:
            printf("Kamis");
            break;
        case 5:
            printf("Jumat");
            break;
        case 6:
            printf("Sabtu");
            break;
        case 7:
            printf("Minggu");
            break;
        default:
            printf("Masukan nomor salah");
    }
}
