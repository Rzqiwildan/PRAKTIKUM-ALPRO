#include <stdio.h>
#include <stdlib.h>


int main() {
    int x, y, z;

    printf("Masukkan nilai x: ");
    scanf("%d", &x);
    printf("Masukkan nilai y: ");
    scanf("%d", &y);
    printf("Masukkan nilai z: ");
    scanf("%d", &z);

    if (x <= 0 || y <= 0 || z <= 0) {
        printf("Terdapat nilai yang bukan sisi segitiga");
    }
    else if (x == y && y == z) {
        printf("Segitiga sama sisi");
    }
    else if (x == y || x == z || y == z) {
        printf("Segitiga sama kaki");
    }
    else {
        printf("Segitiga sembarang");
    }

    return 0;
}





