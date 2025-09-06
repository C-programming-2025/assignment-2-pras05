#include <stdio.h>

int main() {
    int p = 2;
    int pras = 0;
    while (p <= 50) {
        pras += p;
        p += 2;
    }
    printf("%d\n", pras);
    return 0;
}