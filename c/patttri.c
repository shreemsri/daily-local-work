#include <stdio.h>

int main() {
    int i, s, j, r;
    printf("Enter the no. ");
    scanf("%d", &r);
    for(i = 1; i <= r; i++) {
        for(s = 1; s <= r-i; s++)
            printf(" ");
        for(j = 1; j <= (2*i-1); j++)
            printf("*");
        printf("\n");
    }
    return 0;
}