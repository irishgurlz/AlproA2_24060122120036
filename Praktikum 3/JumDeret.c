/*
Nama Program  : JumDeret
Deskripsi     : menuliskan jumlah deret 
Nama Pembuat  : Aniqah Nursabrina
NIM           : 24060122120036
Tanggal       : 09/03/2023
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int N;
    int i;
    int total;

    printf("Masukkan nilai N:");
    scanf("%d", &N);
    total = 0;
    if(N>0){
        for(i=1; i<=N; i++){
            total = total + i;
        }
        printf("%d", total);
    }
    else{
        printf("Masukan salah");
    }
    return 0;
}
