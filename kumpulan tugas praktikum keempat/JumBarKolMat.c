#include <stdio.h>
#include <stdlib.h>

#define ROW_SIZE 3
#define COL_SIZE 3

int main()
{
    int T[ROW_SIZE][COL_SIZE], row_sum[ROW_SIZE] = {0}, col_sum[COL_SIZE] = {0};


    printf("Masukkan elemen tabel T:\n");
    for (int i = 0; i < ROW_SIZE; i++) {
        for (int j = 0; j < COL_SIZE; j++) {
            scanf("%d", &T[i][j]);
        }
    }


    for (int i = 0; i < ROW_SIZE; i++) {
        for (int j = 0; j < COL_SIZE; j++) {
            row_sum[i] += T[i][j];
        }
    }


    for (int j = 0; j < COL_SIZE; j++) {
        for (int i = 0; i < ROW_SIZE; i++) {
            col_sum[j] += T[i][j];
        }
    }


    for (int i = 0; i < ROW_SIZE; i++) {
        printf("Baris ke-%d: ", i+1);
        for (int j = 0; j < COL_SIZE; j++) {
            printf("%d+", T[i][j]);
        }
        printf("\b= %d\n", row_sum[i]);
    }

    for (int j = 0; j < COL_SIZE; j++) {
        printf("Kolom ke-%d: ", j+1);
        for (int i = 0; i < ROW_SIZE; i++) {
            printf("%d+", T[i][j]);
        }
        printf("\b= %d\n", col_sum[j]);
    }

    return 0;
}
