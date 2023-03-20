/* Nama File            : JumFrekNilTabel.c */
/* Deskripsi            : menampilkan jumlah elemen yang memiliki kemunculan lebih dari satu */
/* Pembuat              : Aniqah Nursabrina - 24060122120036 */
/* Tanggal pembuatan    : 20 Maret 2023*/

#include <stdlib.h>
#include <stdio.h>

int main(){
    int T[10]= {7,4,5,7,6,5,3,5,1,4};
    int i;
    int j;
    int sum;
    int count;

    sum = 0;
    if(i<10){
        printf("Masukan harus positif");
    }
    else{
        for (i=0; i<10; i++){
            count = 1;
            for(j=0; j<10; j++){
                if((T[i]== T[j]) && (i!=j)){
                count = count+1;
                }
            }
        if(count>=2){
            sum = sum + T[i];
        }
        }
    }
    printf("%d",sum);
}