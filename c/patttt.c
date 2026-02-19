#include <stdio.h>

int main() {
    int i, j, s, n;
    printf("Enter the no of stars in first line: ");
    scanf("%d", &n);


    // First half: decreasing pattern
    for(i = n; i >= 1; i--) {
        for(s = 0; s < n - i; s++) {
            printf(" ");
        }
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Second half: increasing pattern (starting from 2)
    for(i = 2; i <= n; i++) {
        for(s = 0; s < n - i; s++) {
            printf(" ");
        }
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}