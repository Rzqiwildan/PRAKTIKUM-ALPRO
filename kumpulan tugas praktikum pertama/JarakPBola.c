/*Nama File : JarakPBola */
/*Deskripsi : menghitung jarak (y) yang ditempuh oleh benda yang mengalami gerak parabola dengan kecepatan awal (v0) dalam waktu (t) dengan gravitasi (g)*/
/*Pembuat   : Rizqi Wildan G.R - 24060122140114*/
/*Tanggal   : Selasa, 28, 12.00*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*Kamus*/;

    float v0;
    float t;
    float g;
    float y;

    /*Algoritma*/;

    printf("Masukkan nilai v0: ");
    scanf("%f", &v0);
    printf("Masukkan nilai t: ");
    scanf("%f", &t);
    printf("Masukkan nilai g: ");
    scanf("%f", &g);

    y = v0 * t - 0.5 * (g * t * 2);


    printf("Jarak yang ditempuh adalah %f meter.", y);
    return 0;
}

