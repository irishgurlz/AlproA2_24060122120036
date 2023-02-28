/*
Nama Program  : luasKellLayang
Deskripsi     : Menghitung luas layang-layang (Luas dalam meter persegi), dan keliling layang-layang (Kell dalam meter)
                dari sebuah layang-layang dengan sisi s1 dan s2, serta diagonal d1 dan d2.
Nama Pembuat  : Aniqah Nursabrina
NIM           : 24060122120036
Tanggal       : 24/02/2023
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus Lokal
    float s1; //sisi 1 layang-layang
    float s2; //sisi 2 layang-layang
    float d1; //diagonal 1 layang-layang
    float d2; //diagonal 2 layang layang
    float Luas; //Luas layang-layang
    float Kell; //Keliling layang layang

    //Algoritma
    printf("Masukkan diagonal 1:");
    scanf("%f", &d1);
    printf("Masukkan diagonal 2:");
    scanf("%f", &d2);
    printf("Masukkan sisi 1:");
    scanf("%f", &s1);
    printf("Masukkan sisi 2:");
    scanf("%f", &s2);

    Luas = (d1*d2)/2;
    printf("Luas layang layang: %f\n", Luas);
    Kell = 2*(s1+s2);
    printf("Keliling layang layang: %f", Kell);
    return 0;
}
