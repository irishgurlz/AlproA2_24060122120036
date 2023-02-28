/*
Nama Program  : volBolaKerct
Deskripsi     : Menghitung volume bola (Vb dalam meter kubik), dan volume kerucut (Vk dalam meter kubik) dari
                sebuah lingkaran dengan jari-jari r dan konstanta PHI sebesar 3.1415.
Nama Pembuat  : Aniqah Nursabrina
NIM           : 24060122120036
Tanggal       : 24/02/2023
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus Lokal
    float r;
    float vb;
    float vk;
    const float phi = 3.1415;

    //Algotima
    printf("Masukkan nilai jari jari (r):");
    scanf("%f",&r);

    vb = 4 * (phi*(r*r*r)/3);
    printf("%f\n",vb);

    vk = vb/2;
    printf("%f",vk);
    return 0;
}
