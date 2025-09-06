#include <stdio.h>

int main() {
    int p, r = 1;
    unsigned long long pras = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &p);

    while (r <= p) {
        pras = pras * r;
        r++;
    }

    printf("%llu\n", pras);
    return 0;
}
