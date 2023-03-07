/*Nama File :VolBolaKrct*/
/*Deskripsi : menghitung volume bola (Vb) dan volume kerucut (Vk) dari sebuah lingkaran dengan jari-jari (r)
menggunakan rumus Vb = 4/3 * (PHI * r^3) dan Vk = 1/2 * Vb:*/
/*Pembuat   : Rizqi wildan gilang robbani - 24060122140114*/
/*Tanggal   : Selasa, 28, 13.10*/

#include <stdio.h>
#include <stdlib.h>

#define PHI 3.14 // Mendefinisikan konstanta PHI
int main()
{
     float r;
     float Vb;
     float Vk;
    /*Kamus*/;
    printf("Masukkan nilai r (jari-jari): ");
    scanf("%f", &r);

    Vb = 4.0/3.0 * PHI * r * r * r;
    Vk = 0.5 * Vb;

    /*Algoritma*/;
    printf("Volume bola (Vb) adalah %f m^3.\n", Vb);
    printf("Volume kerucut (Vk) adalah %f m^3.", Vk);
    return 0;
}

