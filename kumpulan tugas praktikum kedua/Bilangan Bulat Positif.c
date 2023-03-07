/*Nama File : BilanganI */
/*Deskripsi : diberikan sebuah inputan i bilangan integer sembarang bahwa bilangan i sebagai bilangan bulat positif atau nol atau bulat negative.
/*Pembuat   : Rizqi Wildan G.R - 24060122140114*/
/*Tanggal   : Selasa, 28, 17.00*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    printf("Masukkan Bilangan yang kita mau: ");

    if (scanf("%d",&i)){
        if (i>0){
            printf ("bilangan tersebut bilangan bulat positif");
        }
        else if (i<0){
            printf ("bilangan bulat negatif");
        }
        else{
            printf ("nol");
        }

    }
    else{
            printf ("bukan termasuk sebuah bilangan");
        }
    return 0;
}
