#include <stdio.h>
#include <stdlib.h>

int main() {
    int iA, iB;
    char pilihan;

    printf("Masukkan bilangan pertama: ");
    scanf("%d", &iA);
    printf("Masukkan bilangan kedua: ");
    scanf("%d", &iB);
    printf("Pilihan menu:\n");
    printf("a. Penjumlahan\n");
    printf("b. Pengurangan\n");
    printf("c. Perkalian\n");
    printf("d. Pembagian\n");
    printf("e. Pembagian Integer\n");
    printf("f. Modulus\n");
    printf("Masukkan pilihan menu: ");
    scanf(" %c", &pilihan);

    switch(pilihan) {
        case 'a':
            printf("Hasil penjumlahan: %d", iA + iB);
            break;
        case 'b':
            printf("Hasil pengurangan: %d", iA - iB);
            break;
        case 'c':
            printf("Hasil perkalian: %d", iA * iB);
            break;
        case 'd':
            printf("Hasil pembagian: %f", (float)iA / iB);
            break;
        case 'e':
            printf("Hasil pembagian integer: %d", iA / iB);
            break;
        case 'f':
            printf("Hasil modulus: %d", iA % iB);
            break;
        default:
            printf("Bukan pilihan menu yang benar");
    }

    return 0;
}
