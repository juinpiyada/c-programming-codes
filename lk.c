#include <stdio.h>

int main() {
  int n, i, sum = 0;

  printf("Enter the number of terms: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
    sum += i * (i + 1) / 2;
  }

  printf("The sum of the series is %d\n", sum);

  return 0;
}