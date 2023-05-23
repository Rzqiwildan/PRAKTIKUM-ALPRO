#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menghasilkan_array_acak (int array[], int size, int min_value, int max_value) {
    int i;
    for (i = 0; i < size; i++) {
        array[i] = min_value + rand() % (max_value - min_value + 1);
    }
}

void bubble_sort(int array[], int size) {
    int i, j;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void counting_sort(int array[], int size, int max_value) {
    int counting_array[max_value + 1];
    int i, j;

    for (i = 0; i <= max_value; i++) {
        counting_array[i] = 0;
    }

    for (i = 0; i < size; i++) {
        counting_array[array[i]]++;
    }

    int index = 0;
    for (i = 0; i <= max_value; i++) {
        for (j = 0; j < counting_array[i]; j++) {
            array[index++] = i;
        }
    }
}

void insertion_sort(int array[], int size) {
    int i, j, key;
    for (i = 1; i < size; i++) {
        key = array[i];
        j = i - 1;

        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j = j - 1;
        }

        array[j + 1] = key;
    }
}

void selection_sort(int array[], int size) {
    int i, j, min_idx;
    for (i = 0; i < size - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < size; j++) {
            if (array[j] < array[min_idx]) {
                min_idx = j;
            }
        }
        int temp = array[min_idx];
        array[min_idx] = array[i];
        array[i] = temp;
    }
}

void print_array(int array[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    srand(time(NULL));

    int size, min_value, max_value;
    printf("Masukkan Panjang array: ");
    scanf("%d", &size);

    int array[size];

    printf("Masukkan arraynya: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    printf("\nArray yang belum terurut: ");
    print_array(array, size);

    char sort_type;
    printf("Pilihan Sorting: \n");
    printf("A. Bubble Sort\n");
    printf("B. Counting Sort\n");
    printf("C. Insertion Sort\n");
    printf("D. Selection Sort\n");
    printf("Pilih sort yang digunakan: ");
    scanf(" %c", &sort_type);

    printf("\n");

    switch (sort_type) {
        case 'A':
        case 'a':
            printf("Sorting yang digunakan adalah Bubble Sort\n");
            bubble_sort(array, size);
            break;
        case 'B':
        case 'b':
            printf("Sorting yang digunakan adalah Counting Sort\n");
            counting_sort(array, size, 100); // Ubah 100 sesuai dengan rentang maksimal nilai dalam array
            break;
        case 'C':
        case 'c':
            printf("Sorting yang digunakan adalah Insertion Sort\n");
            insertion_sort(array, size);
            break;
        case 'D':
        case 'd':
            printf("Sorting yang digunakan adalah Selection Sort\n");
            selection_sort(array, size);
            break;
        default:
            printf("Pilihan sorting tidak valid\n");
            return 1;
    }

    printf("\nArray yang sudah terurut: ");
    print_array(array, size);

    return 0;
}
