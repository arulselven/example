#include <stdio.h>
int main() {
    int n, count = 0, num = 2, i, isPrime;

    // Read the number of prime numbers to generate
    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("First %d prime numbers are:\n", n);

    // Continue until N prime numbers are found
    while (count < n) {
        isPrime = 1;  // Assume the number is prime

        // Check whether the number is prime
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;  // Not a prime number
                break;
            }
        }
        // If prime, print it and increase count
        if (isPrime) {
            printf("%d ", num);
            count++;
        }
        num++;  // Check the next number
    }
    return 0;
}
