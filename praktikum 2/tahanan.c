/*
Nama Program  : tahanan
Deskripsi     : menerima 3 buah tahanan yang dimasukan menggunakan keyboard dan menghasilkan total tahanan jika dirangkai seri
Nama Pembuat  : Aniqah Nursabrina
NIM           : 24060122120036
Tanggal       : 06/03/2023
*/
#include <stdio.h>
int  main(){
    // Kamus Lokal
    int x;
    int y;
    int z;
    int jumlah;

    // Algoritma
    printf("Masukkan tahanan 1: ");
    scanf("%d", &x);
    printf("Masukkan tahanan 2: ");
    scanf("%d", &y);
    printf("Masukkan tahanan 3: ");
    scanf("%d", &z);
    jumlah = x+y+z;

    if((x>=0) && (y>=0) && (z>=0)){
        printf("%d", &jumlah);
    }else {
        printf("Masukan tahanan tidak boleh negatif");
    }
    return 0;
}

