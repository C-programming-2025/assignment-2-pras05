#include <stdio.h>

int main() {
    int p;
    scanf("%d", &p);
    int x, y;

    for (int x = 0; x < p; x++) {
        for (int y = 0; y < p; y++) {
            printf("*");
            if (y < p - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}