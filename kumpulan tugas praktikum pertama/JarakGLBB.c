/*Nama File : JarakGLBB*/
/*Deskripsi : menghitung jarak (S) yang ditempuh benda yang mengalami gerak lurus berubah beraturan dengan kecepatan awal (v0), waktu (t), dan percepatan (a)*/
/*Pembuat   : Rizqi wildan gilang robbani - NIM*/
/*Tanggal   : selasa, 28, 13.10*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float v0;
    float t;
    float a;
    float S;

    /*Kamus*/;
    printf("Masukkan kecepatan awal: ");
    scanf("%f", &v0);
    printf("Masukkan waktu: ");
    scanf("%f", &t);
    printf("Masukkan percepatan: ");
    scanf("%f", &a);

    S = v0 * t + 0.5 * a * t * t;

    /*Algoritma*/;
    printf("Jarak yang ditempuh: %.2f meter\n", S);
    return 0;
}

