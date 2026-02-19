#include <stdio.h>

int linearSearch(const int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int data[] = {40, 10, 80, 50, 20};
    int size = sizeof(data) / sizeof(data[0]);
    int value = 50;
    int result = linearSearch(data, size, value);

    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found\n");
    }

    return 0;
}