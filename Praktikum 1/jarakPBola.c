/*
Nama Program  : jarakPBola
Deskripsi     : menghitung jarak (y dalam meter) yang ditempuh benda yang mengalami gerak gerak parabola
                dengan kecepatan awal v0 dalam waktu t dengan gravitasi g.
Nama Pembuat  : Aniqah Nursabrina
NIM           : 24060122120036
Tanggal       : 24/02/2023
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    //Kamus Lokal
    float v0; //kecepatan awal
    float t; //waktu
    float y; //jarak
    const float g = 9.8; //gravitasi

    //Algoritma
    printf("Masukkan kecepatan awal (v0): ");
    scanf("%f", &v0);
    printf("Masukkan waktu (t): ");
    scanf("%f", &t);

    y = v0 * t * 0.5 * (g*t*t);
    printf("jarak: %f",y);
    return 0;
}
