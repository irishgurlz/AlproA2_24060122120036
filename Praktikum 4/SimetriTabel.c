/* Nama File            : SimetriTabel.c */
/* Deskripsi            : menampilkan apakah sebuah array simetri atau tidak*/
/* Pembuat              : Aniqah Nursabrina - 24060122120036 */
/* Tanggal pembuatan    : 20 Maret 2023*/

#include <stdlib.h>
#include <stdio.h>

int main(){
    int T1[10] = {7,4,5,7,6,5,3,5,1,4};
    int T2[10] = {7,4,5,7,6,5,3,5,1,4};
    int i;
    int size1;
    int size2;
    int count;

    size1 = 10;
    size2 = 10;

    if (size1 == size2){
        count = 0;
        for (i =0; i <10; i++){
            if (T1[i] == T2[i]){
                count = count + 1;
            }
        }
        if (count == size1){
            printf("Simetris");
        }
        else{
            printf("Tidak Simetris");
        }
    }
    else{
        printf("Tidak Simetris");
    }
    return 0;
}
