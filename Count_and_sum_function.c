#include <stdio.h>

int count1(int number) {
  int count = 0;
  while (number > 0) {
    number = number / 10;
    count++;
  }
  return count;
}

int sum2(int number) {
  int sum = 0;
  while (number > 0) {
    sum = sum + number % 10;
    number = number / 10;
  }
  return sum;
}

int main() {
  int number;
  printf("Enter The Number:");
  scanf(" %d ", &number);

  int numberOfDigits = count1(number);
  printf(" The number of digits in the number is %d ", numberOfDigits);

  int sumOfDigits = sum2(number);
  printf(" The sum of the digits in the number is %d ", sumOfDigits);

  return 0;
}