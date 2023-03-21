/* Nama File            : FrekNilTabel.c */
/* Deskripsi            : Menampilkan elemen yang memiliki kemunculan lebih dari satu */
/* Pembuat              : Aniqah Nursabrina - 24060122120036 */
/* Tanggal pembuatan    : 20 Maret 2023*/

#include <stdlib.h>
#include <stdio.h>

int main(){
    int T[10] = {7,4,5,7,6,5,3,5,1,4};
    int count;
    int i;
    int j;
    
    for (i=0;i<10;i++)
    {
        count = 1;
        if(T[i]!=0)
        {
        for (j=1;j<10;j++){
            if ((T[i] == T[j]) && (i != j)){
                count = count + 1;
                T[j] = 0;
            }
        } 
        if (count >=2){
            printf ("%d", T[i]);
        }
        }
    } 
    return 0;
    
}
