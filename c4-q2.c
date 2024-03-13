#include <stdio.h>

int main() {
    int n, i, flag = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // 0 and 1 are not prime numbers
    // Change the flag to 1 for non-prime numbers
    if (n == 0 || n == 1)
        flag = 1;

    for (i = 2; i <= n / 2; ++i) {
        // If n is divisible by i, then n is not prime
        // Change the flag to 1 for non-prime numbers
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }

    // Flag is 0 for prime numbers
    if (flag == 0)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    return 0;
}
