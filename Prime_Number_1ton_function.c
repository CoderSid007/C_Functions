#include <stdio.h>
#include <math.h>

<<<<<<< HEAD
=======

>>>>>>> f02e6ebb251e3c89e3294fdb3bf2dde86744a1e5
int Prime(int num) {
    if (num == 1) {
        return 0;
    }

    if (num == 2) {
        return 1;
    }

<<<<<<< HEAD
=======
   
>>>>>>> f02e6ebb251e3c89e3294fdb3bf2dde86744a1e5
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0;
        }
    }

<<<<<<< HEAD
=======
   
>>>>>>> f02e6ebb251e3c89e3294fdb3bf2dde86744a1e5
    return 1;
}

int main() {
    int n, count = 0;

    printf("Enter a number to check prime numbers from 1 to n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (Prime(i)) {
            count++;
            printf("%d ", i);
        }
    }

    printf("\nTotal prime numbers between 1 and %d: %d", n, count);

    return 0;
}
