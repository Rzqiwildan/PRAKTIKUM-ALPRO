/*Nama File : GayaSentry*/
/*Deskripsi :  menghitung gaya yang terjadi dari massa, kecepatan, dan jari-jari dengan rumus F =m * (v2 / r)*/
/*Pembuat   : Rizqi wildan gilang robbani - 24060122140114*/
/*Tanggal   : Selasa, 28, 12.00*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m;
    float v;
    float r;
    float F;

    /*Kamus*/;
    printf("Masukkan nilai m (massa): ");
    scanf("%f", &m);
    printf("Masukkan nilai v (kecepatan): ");
    scanf("%f", &v);
    printf("Masukkan nilai r (jari-jari): ");
    scanf("%f", &r);

    F = m * (v * v / r);


    /*Algoritma*/;
    printf("Gaya (F) yang terjadi adalah %f N.", F);
    return 0;
}

