#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int sum_of_digits(int num){
    if (num/10 == 0){
        return num;
    } else {
        return num%10 + sum_of_digits(num/10);
    }
}

int main() {
    int num;
    scanf("%d", &num);
    printf("%d\n", sum_of_digits(num));
    return 0;
}