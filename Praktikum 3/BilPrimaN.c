/*
Nama Program  : BilPrimaN
Deskripsi     : menuliskan bilangan prima apa saja yang ada sebelum N
Nama Pembuat  : Aniqah Nursabrina
NIM           : 24060122120036
Tanggal       : 09/03/2023
*/
#include <stdlib.h>
#include <stdio.h>

int main(){
    int n, i, j;
    
    printf("Masukkan N :");
    scanf("%d", &n);
    int total;

    if (n > 0){
        for (i = 2; i <= n; i++){
            total = 0;
            for (j = 2; j <= i; j++){
                if (i%j == 0){
                    total = total + 1;
                }
            }
            if ( total == 1){
                printf("%d,", i);
            }
        }
    }
    else {
        printf("Masukkan tidak boleh negative");
    }
}