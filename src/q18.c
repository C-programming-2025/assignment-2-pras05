#include <stdio.h>

int main() {
    int p;
    scanf("%d", &p);

    int r = 1;
    while (r <= 10) {
        printf("%d ", p * r);
        r++;
    }

    return 0;
}