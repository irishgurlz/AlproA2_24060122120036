/*
Nama Program  : BilSempN
Deskripsi     : menuliskan bilangan sempurna yang berada sebelum N
Nama Pembuat  : Aniqah Nursabrina
NIM           : 24060122120036
Tanggal       : 09/03/2023
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int N;
    int i;
    int j;
    int total;

    printf("Masukkan nilai N:");
    scanf("%d", &N);
    

    if(N>0){
        for(i=1; i<N; i++){
            total = 0;
            for(j=1; j<i; j++){
                if(i%j == 0){
                    total = total + j;
                }
            }
            if (total == i){
                printf("%d", i);
            }
        }
    }
    else{
        printf("Masukan tidak boleh negatif");
    }
    return 0;
}