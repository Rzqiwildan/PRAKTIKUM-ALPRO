#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int main()
{
    int T[MAX_SIZE], freq[MAX_SIZE], n, sum = 0;
    printf("Masukkan jumlah elemen tabel: ");
    scanf("%d", &n);

    printf("Masukkan elemen tabel:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &T[i]);
        freq[i] = -1;
    }

    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (T[i] == T[j]) {
                count++;
                freq[j] = 0;
            }
        }
        if (freq[i] != 0) {
            freq[i] = count;
        }
    }
    for (int i = 0; i < n; i++) {
        if (freq[i] > 1) {
            sum += T[i] * freq[i];
        }
    }
    printf("Jumlah nilai elemen tabel yang frekuensi kemunculannya lebih dari satu kali adalah %d", sum);
    return 0;
}
