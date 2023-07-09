#include <stdio.h>

void SortIntArr(int arr[], int size) {
    int i, j, temp;

    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[100];
    int size, i;

    printf("Dizi boyutunu girin: ");
    scanf("%d", &size);

    printf("Dizi elemanlarini girin:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    SortIntArr(arr, size);

    printf("Siralama sonucu: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
