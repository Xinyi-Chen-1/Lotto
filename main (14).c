#include <stdio.h>

int isWinner(int num1, int num2, int winningSum) {
  int sum = num1 + num2;
  if (sum == winningSum) {
    return 1;
  } else {
    return 0;
  }
}

int main(void) {
  int num1, num2, winningSum;
  do {
    scanf("%d", &num1);
  } while (num1 < 1 || num1 > 10);

  do {
    scanf("%d", &num2);
  } while (num2 < 1 || num2 > 10);

 scanf("%d", &winningSum);

 isWinner(num1, num2, winningSum);

  if (isWinner(num1, num2, winningSum) == 1) {
    printf("1\n");
  } else {
    printf("0\n");
  }

  return 0;
}
