#include <stdio.h>

int main() {
    int p;
    printf("Enter an Integer: ");
    scanf("%d", &p);
    if (p > 0) {
        printf("Positive\n");
    } else if (p < 0) {
        printf("Negative\n");
    } else {
        printf("Zero\n");
    }
    return 0;
}