#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("%d is not prime\n", n);
        return 0;
    }

    int i = 2;
    int pras = 1; 
    while (i * i <= n) {
        if (n % i == 0) {
            pras = 0;
            break;
        }
        i++;
    }

    if (pras) {
        printf("%d is prime\n", n);
    } else {
        printf("%d is not prime\n", n);
    }

    return 0;
}