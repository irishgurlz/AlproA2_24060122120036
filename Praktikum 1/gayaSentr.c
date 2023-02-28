/*
Nama Program  : gayaSentr
Deskripsi     : Menghitung gaya (F dalam Newton) yang terjadi dari massa m, kecepatan v, dan jari-jari r.
Nama Pembuat  : Aniqah Nursabrina
NIM           : 24060122120036
Tanggal       : 24/02/2023
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    //Kamus Lokal
    float F; //Gaya
    float m; //massa
    float v; //kecepatan
    float r; //jari jari

    //Algoritma
    printf("Masukkan massa (m):");
    scanf("%f", &m);
    printf("Masukkan kecepatan (v)");
    scanf("%f", &v);
    printf("Masukkan jari-jari (r):");
    scanf("%f", &r);

    F = m*(v*v/r);
    printf("Gaya: %f",F);
    return 0;
}

