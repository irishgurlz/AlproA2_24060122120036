/*
Nama Program  : CekBilPrima
Deskripsi     : menentukan apakah sebuah bilangan prima atau bukan
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
    if(N>0){
        for(i=1; i<=N; i++){
            if(N%i==0){
                total=total+1;
            }
        }
    
        if(total==2){
            printf("Bilangan Prima");
        }
        else{
            printf("Bukan Bilangan Prima");
        }
    }
    return 0;
}