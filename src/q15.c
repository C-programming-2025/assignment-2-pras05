#include <stdio.h>

int main() {
    int p;
    int r = 2;
    int pras = 1;
    scanf("%d", &p);
    if (p <= 1) {
        pras = 0;
    } else {
        while (r <= p / 2 && pras == 1) {
            if (p % r == 0) {
                pras = 0;
            }
            r++;
        }
    }
    if (pras)
        printf("It is a prime number.\n", p);
    else
        printf("It is not a prime number.\n", p);
    return 0;
}
