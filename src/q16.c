#include <stdio.h>

int main() {
    int p; 
    scanf("%d", &p);

    int pras = 1;
    int r = p;

    if (p == 0 || p == 1) {
        pras = 1;
    } else {
        do {
            pras = pras * r;
            r--;
        } while (r > 1);
    }
    printf("%d\n", pras);
    return 0;
}