#include <stdio.h>

int main() {
    int p;
    int r = 1;
    scanf("%d", &p);
    for (int r = 1; r <= p; r++) {
        if (p % r == 0) {
            printf("%d ", r);
        }
    }
    return 0;
}