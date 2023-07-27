#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num == 1) {
        return 0;
    }

    if (num == 2) {
        return 1;
    }

    // Check if the number is divisible by any number from 2 to the square root of the number
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0;
        }
    }

    // If the number is not divisible by any number from 2 to the square root of the number, then it is prime
    return 1;
}

int main() {
    int n, count = 0;

    printf("Enter a number to check prime numbers from 1 to n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (isPrime(i)) {
            count++;
            printf("%d ", i);
        }
    }

    printf("\nTotal prime numbers between 1 and %d: %d", n, count);

    return 0;
}