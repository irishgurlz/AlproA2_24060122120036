/*
Nama Program  : FaktorBil
Deskripsi     : menuliskan faktor dari suatu bilangan
Nama Pembuat  : Aniqah Nursabrina
NIM           : 24060122120036
Tanggal       : 09/03/2023
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int N;
    int i;

    printf("Masukkan nilai N:");
    scanf("%d", &N);
    if(N>0){
        for(i=1; i<=N; i++){
            if(N%i==0){
                printf("%d,",i);
            }
        }
    }
    else{
        printf("Masukan salah");
    }
    return 0;
}