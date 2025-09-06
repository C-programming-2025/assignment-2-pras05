#include <stdio.h>

int main() {
    int p;
    scanf("%d", &p);

    if (p <= 1) {
        printf("not a prime\n", p);
        return 0;
    }
    int r = 2;
    int pras = 1;
    while (r * r <= p) {
        if (p % r == 0) {
            pras = 0;
            break;
        }
        r++;
    }
    if (pras) {
        printf("prime\n", p);
    } else {
        printf("not a prime\n", p);
    }
    return 0;
}