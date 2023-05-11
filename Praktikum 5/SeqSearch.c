/*Nama File : SeqSearch */
/*Nama Pembuat : Aniqah Nursabrina */
/*Tanggal : 11 Mei 2023 */
/*Deskripsi : Mencari pada indeks keberapa X yang dicari*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int T[10] = {7,4,5,7,6,5,3,5,1,4};
    int x=5;
    int i;
    int N=10;
    int IX;

    i=0;
    while ((i<N) && (T[i]!=x)){
        i = i+1;
    }
    if (T[i] == x){
        IX = i;
        printf("Maka indeks ditemukan X pertama kali adalah %d",IX);
    }
    else{
        IX = 0;
        printf("Maka indeks ditemukan X pertama kali adalah %d",IX);
    }
}
