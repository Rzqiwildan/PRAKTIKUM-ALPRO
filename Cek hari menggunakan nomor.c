#include <stdio.h>
#include <stdlib.h>

int main() {
//Kamus
    int C;

//Algoritma
    printf("Cek Hari Nomor : ");
    scanf("%d", &C);

    switch(C){
    case 1:
        printf("Ini hari senin");
        break;
    case 2:
        printf("Ini hari selasa");
        break;
    case 3:
        printf("Ini hari rabu");
        break;
    case 4:
        printf("Ini hari kamis");
        break;
    case 5:
        printf("Ini hari jumat");
        break;
    case 6:
        printf("Ini hari sabtu");
        break;
    case 7:
        printf("Ini hari minggu");
        break;

    default:
        printf("Masukan nomor hari tidak tepat");
        //break;
    }
    return 0;

}


