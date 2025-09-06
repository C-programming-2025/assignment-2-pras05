#include <stdio.h>

int main() {
    int p, pras;
    printf("Enter an integer: ");
    scanf("%d", &p);
    if (p < 0) {
        pras = -p;
    } else {
        pras = p;
    }
    printf("Absolute Value: %d\n", pras);
    return 0;
}