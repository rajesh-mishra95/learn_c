#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

long max_of_three(long a, long b, long c) 
{
  long max = 0;
  if ((a > b) && (a > c)) {
    // a is larger than b and c
    max = a;
  }
  if ((b > a) && (b > c)) {
    // b is larger than a and c
    max = b;
  }
  if ((c > a) && (c > b)) {
    // c is larger than a and b
    max = c;
  }
  return max;
}

int main() {
    printf("%ld\n", max_of_three(10, 10, 10));
    return 0;
}