#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    printf("Masukkan bilangan N: ");
    scanf("%d", &N);

    printf("Bilangan sempurna dari 1 hingga %d adalah: ", N);
    for (int i = 1; i <= N; i++) {
        int sum = 0;
        for (int j = 1; j < i; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }
        if (sum == i) {
            printf("%d ", i);
        }
    }

    return 0;
}
