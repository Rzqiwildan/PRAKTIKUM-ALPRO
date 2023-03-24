#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int main()
{
    int T1[MAX_SIZE], T2[MAX_SIZE], n1, n2, simetri = 1;
    printf("Masukkan ukuran tabel T1: ");
    scanf("%d", &n1);

    printf("Masukkan elemen tabel T1:\n");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &T1[i]);
    }

    printf("Masukkan ukuran tabel T2: ");
    scanf("%d", &n2);

    printf("Masukkan elemen tabel T2:\n");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &T2[i]);
    }

    if (n1 != n2) {
        simetri = 0;
    }
    else {

        for (int i = 0; i < n1; i++) {
            if (T1[i] != T2[i]) {
                simetri = 0;
                break;
            }
        }
    }

    if (simetri) {
        printf("Tabel T1 dan T2 simetri");
    }
    else {
        printf("Tabel T1 dan T2 tidak simetri");
    }

    return 0;
}
