#include<stdio.h>

int Armstrong(int n) {
    int sum = 0, temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }
    return (sum == n);
}

int main() {
    int n, i, count = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if (Armstrong(i)) {
            printf("%d ", i);
            count++;
        }
    }
    printf("\nTotal number of armstrong numbers between 1 to %d are: %d", n, count);
    return 0;
}
