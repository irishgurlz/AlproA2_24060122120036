/* Nama File            : NilMax2Tabel.c */
/* Deskripsi            : menampilkan elemen maksimal kedua dari sebuah array */
/* Pembuat              : Aniqah Nursabrina - 24060122120036 */
/* Tanggal pembuatan    : 20 Maret 2023*/

#include <stdlib.h>
#include <stdio.h>

int main(){
    int T[10] = {7,4,5,7,6,5,3,5,1,4};
    int i;
    int max2;
    int max1;

    max1 = 0;
    max2 = 0;
    if(i<10){
        printf("Masukan harus positif");
    }
    else {
        for (i=0; i<10; i++){
            if(T[i]>max1){
                max2=max1;
                max1=T[i];
            }
            if((T[i]>max2) && (T[i]<max1)){
                max2=T[i];
            }
        }
    }
    printf("%d", max2);
}
