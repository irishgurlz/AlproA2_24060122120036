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
    char operasi;
    int plus;
    int min;
    int times;
    float bagi;
    int mod;
    int div;

    // Algoritma
    printf("Masukkan operasi : ");
    (scanf("%c", &operasi));
    printf("Masukkan angka 1 : ");
    (scanf("%d", &x));
    printf("Masukkan angka 2 : ");
    (scanf("%d", &y));

    plus = x+y;
    min = x-y;
    times = x*y;
    bagi = (float)x/(float)y;
    div = x/y;
    mod = x%y;

    if (operasi == 'a'){
        printf("%d", plus);
    } else if (operasi == 'b'){
        printf(x-y);
    } else if (operasi == 'c'){
        printf("%d", min);
    } else if (operasi == 'd'){
        printf("%d", times);
    } else if (operasi == 'e'){
        printf("%.2f", bagi);
    } else if (operasi == 'f'){
        printf("%d", div);
    }  else {
        printf("%d", mod);
    } return 0;
}
