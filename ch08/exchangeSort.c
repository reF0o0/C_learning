#include <stdio.h>

int main(void) {
    int arr[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };

    for (size_t i = 0; i < sizeof(arr) / sizeof(arr[0]) - 1; i++) {
        for (size_t j = i + 1; j < sizeof(arr) / sizeof(arr[0]); j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        printf("%d\n", arr[i]);
    }
}
