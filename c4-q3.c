#include <stdio.h>

int main() {
    int start =3, end = 100;

    // Input range
    // printf("Enter the start of the range: ");
    // scanf("%d", &start);
    // printf("Enter the end of the range: ");
    // scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    // Iterate through the range and check for prime numbers
    for (int num = start; num <= end; num++) {
        // Skip 0 and 1
        if (num <= 1) {
            continue;
        }
        int isPrime = 1; // Assume num is prime initially
        // Check for prime
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0; // Set isPrime to 0 if num is not prime
                break;
            }
        }
        // Print prime numbers
        if (isPrime) {
            printf("%d ", num);
        }
    }
    printf("\n");

    return 0;
}
