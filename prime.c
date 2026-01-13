#include <stdio.h>

int main() {
    int limit, i, j, isPrime;

    printf("Enter the limit: ");
    scanf("%d", &limit);

    printf("Prime numbers up to %d are:\n", limit);

    for (i = 2; i <= limit; i++) {
        isPrime = 1;  // assume number is prime

        // check divisibility
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;  // not prime
                break;
            }
        }

        if (isPrime == 1) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}

