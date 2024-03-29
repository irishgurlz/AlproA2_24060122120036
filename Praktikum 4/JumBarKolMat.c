/* Nama File            : JumBarKolMat.c */
/* Deskripsi            : menampilkan jumlah dari setiap baris dan kolom */
/* Pembuat              : Aniqah Nursabrina - 24060122120036 */
/* Tanggal pembuatan    : 20 Maret 2023*/

#include <stdlib.h>
#include <stdio.h>

int main() {

    int i, j;
    int Baris, Kolom; 
    int total; 
    int** T; 
    
    total = 0;
    printf("Masukkan nilai Baris : ");
    scanf("%d", &Baris);
    printf("Masukkan nilai Kolom : ");
    scanf("%d", &Kolom);

    if (Baris <= 0 || Kolom <= 0) {
        printf("Masukkan harus positif");
    }
    else {
        T = (int**)malloc(Baris * sizeof(int*));
        for (i = 0; i < Baris; i++) {
            T[i] = (int*)malloc(Kolom * sizeof(int));
        }

        for (i = 0; i < Baris; i++) {
            for (j = 0; j < Kolom; j++) {
                scanf("%d", &T[i][j]);
            }
        }

        for (i = 0; i < Baris; i++) {
            total = 0;
            for (j = 0; j < Kolom; j++) {
                total = total + T[i][j];
            }
            printf("baris ke %d : %d\n", i, total);
        }

        for (i = 0; i < Kolom; i++) {
            total = 0;
            for (j = 0; j < Baris; j++) {
                total = total + T[j][i];
            }
            printf("kolom ke %d : %d\n", i, total);
        }

        for (i = 0; i < Baris; i++) {
            free(T[i]);
        }
        free(T);
    }
    return 0;
}
