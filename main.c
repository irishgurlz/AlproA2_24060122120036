#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nama;
    int power;
}pokemon;
int main(void)
{
    pokemon PKM;
    int retval;

    FILE *myFILE, *SClass, *AClass;

    myFILE = fopen("listpokemon.txt", "r");
    SClass = fopen("pokemonSClass.txt", "w");
    AClass = fopen("pokemonAClass.txt", "w");

    if(!myFILE){
        printf("File tidak ditemukan!");
    } else{
        fprintf(SClass, "Daftar pokemon yang termasuk S Class\n");
        fprintf(AClass, "Daftar pokemon yang termasuk A Class\n");
        retval = fscanf(myFILE, "%s,%d", &PKM.nama, &PKM.power);
        while (retval != EOF)
        {
            if(PKM.power >=800){
                fprintf(SClass, "Nama:%s power:%d\n", PKM.nama,PKM.power);
            } else{
                printf(AClass, "Nama:%s power:%d\n", PKM.nama,PKM.power);
            }
            retval = fscanf(myFILE,"%s,%d", &PKM.nama, &PKM.power);
        }
        printf("Pokemon berhasil dikelompokkan");
        return 0;
    }
}
