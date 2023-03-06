/*
Nama Program  : jarakGLBB
Deskripsi     : menghitung jarak (S dalam meter) yang ditempuh benda yang mengalami gerak lurus berubah
                beraturan dengan kecepatan awal v0 dalam waktu t, dan percepatan a.
Nama Pembuat  : Aniqah Nursabrina
NIM           : 24060122120036
Tanggal       : 24/02/2023
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    //Kamus Lokal
    float s; //jarak
    float v0; //kecepatan awal
    float t; //waktu
    float a; //percepatan

    //algoritma
    printf("Masukkan kecepatan awal (v0):");
    scanf("%f", &v0);
    printf("Masukkan waktu (t):");
    scanf("%f", &t);
    printf("Masukkan percepatan (a):");
    scanf("%f", &a);

    s = v0 * t + 0.5 * (a*t*t);
    printf("Jarak (s): %f",s);
    return 0;
}
