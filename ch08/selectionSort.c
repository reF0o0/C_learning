#include <stdio.h>
int main(void) {
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    for (size_t i = 0; i < sizeof(arr) / sizeof(arr[0]) - 1; i++) {
        size_t index = i;
        for (size_t j = i + 1; j < sizeof(arr) / sizeof(arr[0]); j++) {
            if (arr[j] < arr[index]) {
                index = j;
            }
        }
        if (index != i) {
            int temp = arr[i];
            arr[i] = arr[index];
            arr[index] = temp;
        }
    }

    for (size_t i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        printf("%d, ", arr[i]);
    }
    printf("\n");

    return 0;
}
