/*Nama File : Ascending */
/*Nama Pembuat : Aniqah Nursabrina */
/*Tanggal : 11 Mei 2023 */
/*Deskripsi : Mengurutkan secara ascending atau dari yang paling kecil ke paling besar*/

#include<stdio.h>
#include<stdlib.h>

int main(void){
    int T[6]={10,12,99,57,35,26};
    int SimpanSementara;
    int N = 6;

    printf("Sebelum");
    for(int i = 0;i<N;i++){
        printf("\n%d",T[i]);
    }
    for(int i = 0;i<N;i++){
         for(int j = 0;j<N;j++){
            if(T[j]>T[j+1]){
                SimpanSementara = T[j];
                T[j] = T[j+1];
                T[j+1]=SimpanSementara;

            }
    }
    }
    printf("\nSesudah\n");
    for(int i = 0;i<N;i++){
        printf("\n%d",T[i]);
    }
    return 0;
}
