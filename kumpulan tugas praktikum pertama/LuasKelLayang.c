/*Nama File : LuasKellLayang*/
/*Deskripsi : menghitung luas (Luas) dan keliling (Kell) dari
sebuah layang-layang dengan sisi-sisi (s1, s2) dan diagonal-diagonal (d1, d2) menggunakan rumus Luas = 1/2 * d1 * d2 dan Kell = 2 * (s1 + s2)*/
/*Pembuat   : Rizqi wildan gilang robbani - 24060122140114*/
/*Tanggal   : Selasa, 28, 13.10*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float s1;
    float s2;
    float d1;
    float d2;
    float Luas;
    float Kell;

    /*Kamus*/;
    printf("Masukkan nilai s1 (sisi satu layang-layang): ");
    scanf("%f", &s1);
    printf("Masukkan nilai s2 (sisi dua layang-layang): ");
    scanf("%f", &s2);
    printf("Masukkan nilai d1 (diagonal satu layang-layang): ");
    scanf("%f", &d1);
    printf("Masukkan nilai d2 (diagonal dua layang-layang): ");
    scanf("%f", &d2);

    Luas = 0.5 * d1 * d2;
    Kell = 2 * (s1 + s2);

    /*Algoritma*/;
    printf("Luas layang-layang adalah %f m^2.\n", Luas);
    printf("Keliling layang-layang adalah %f m.", Kell);
    return 0;
}

