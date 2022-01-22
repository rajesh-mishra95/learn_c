#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

char check_code(long num) {
    char arr_check_code[13] = {'Y', 'X', 'W', 'U', 'R', 'N', 'M', 'L', 'J', 'H', 'E', 'A', 'B'};
    int sum_digits = 0;
    while (num != 0) {
        sum_digits += num%10;
        num /= 10;
    }
    return arr_check_code[sum_digits%13];
}

int main() {
    long num;
    scanf("%ld", &num);
    char c = check_code(num);
    putchar(c);
    printf("\n");
    return 0;
}