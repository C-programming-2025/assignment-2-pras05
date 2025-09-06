#include <stdio.h>

int main() {
    int p;
    scanf("%d", &p);

    for (int r = p; r >= 1; r--) {
        printf("%d ", r);
    }
    return 0;
}