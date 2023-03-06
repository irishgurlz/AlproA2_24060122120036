/*
Nama Program  :
Deskripsi     :
Nama Pembuat  :
NIM           :
Tanggal       :
*/
#include <stdio.h>
int  main(void){
    // Kamus Lokal
    int x;
    int y;
    int z;

    // Algoritma
    printf("Masukkan sisi 1 = ");
    (scanf("%d", &x));
    printf("Masukkan sisi 2 = ");
    (scanf("%d", &y));
    printf("Masukkan sisi 3 = ");
    (scanf("%d", &z));

    if (((x>0)&&(y>0)&&(z>0)) && (x+y>=z) && ((x+z>=y) && (z+y>=x))){
        if ((x==y)&&(y==z)){
            printf("Segitiga sama sisi");
        } else if((x==y)||(y==z)){
            printf("Segitiga sama kaki");
        } else if ((x != y) && (y != z)){
            printf("Segitiga sembarang");
        }
    }else {
        printf("Bukan Segitiga");
    }
    return 0;
}
