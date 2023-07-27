#include<stdio.h>

int main()
{
    int n, i, j, k, count = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        int temp = i, sum = 0;
        while(temp > 0)
        {
            k = temp % 10;
            sum += k * k * k;
            temp /= 10;
        }
        if(sum == i)
        {
            printf("%d ", i);
            count++;
        }
    }
    printf("\nTotal number of armstrong numbers between 1 to %d are: %d", n, count);
    return 0;
}