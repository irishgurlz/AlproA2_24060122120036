/*
Nama Program  : JumDeret
Deskripsi     : menuliskan jumlah deret 
Nama Pembuat  : Aniqah Nursabrina
NIM           : 24060122120036
Tanggal       : 09/03/2023
*/
#include <stdio.h>
#include <stdlib.h>
//menuliskan satu persatu angka sebelum N dan N
int a(void){
    int N;
    int i;

    printf("Masukkan nilai N:");
    scanf("%d", &N);
    for(i=1; i<=N; i++){
        printf("%d",i);
        printf("\n");
    }
    return 0;
}
