#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 1000

#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int n, i, j, count;
    int t[MAX_SIZE];
    int freq[MAX_SIZE];

    printf("Masukkan jumlah elemen dalam tabel: ");
    scanf("%d", &n);

    printf("Masukkan elemen dalam tabel: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &t[i]);
        freq[i] = -1; // Inisialisasi nilai frekuensi elemen menjadi -1
    }

    for (i = 0; i < n; i++) {
        count = 1;
        for (j = i + 1; j < n; j++) {
            if (t[i] == t[j]) {
                count++;
                freq[j] = 0; // Set nilai frekuensi elemen yang sama menjadi 0
            }
        }

        if (freq[i] != 0) {
            freq[i] = count;
        }
    }

    printf("Elemen yang muncul lebih dari satu kali dalam tabel adalah: ");
    for (i = 0; i < n; i++) {
        if (freq[i] > 1) {
            printf("%d ", t[i]);
        }
    }

    return 0;
}
