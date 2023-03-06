/*
Nama Program  : bilInteger
Deskripsi     : menampilkan bilangan i tersebut sebagai bilangan bulat positif atau nol atau bulat negative.
Nama Pembuat  : Aniqah Nursabrina
NIM           : 24060122120036
Tanggal       : 06/03/2023
*/
#include <stdio.h>
int  main(void){
    // Kamus Lokal
    int Bil;

    // Algoritma
    printf("Masukkan input = ");
    if (scanf("%d", &Bil)){
        if (Bil > 0){
            printf("Bilangan bulat positif");
        } else if (Bil == 0){
            printf("Bilangan nol");
        } else if (Bil < 0){
            printf("Bilangan bulat negatif");
        }
    } else {
        printf("Bukan termasuk sebuah bilangan");
    }
    return 0;
}
