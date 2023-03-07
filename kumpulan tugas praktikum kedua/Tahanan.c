#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

int main() {
    int t1, t2, t3, total_tahanan;
    printf("Masukkan nilai t1: ");
    scanf("%d", &t1);
    printf("Masukkan nilai t2: ");
    scanf("%d", &t2);
    printf("Masukkan nilai t3: ");
    scanf("%d", &t3);

    if (t1 >= 0 && t2 >= 0 && t3 >= 0) {
        printf("Semua tahanan termasuk positif");
    }
    else {
        printf("Masukan tahanan tidak boleh negatif");
    }
    return 0;
}
