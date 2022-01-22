#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void binary_to_decimal(int num){
    int p = 0;
    int decimal = 0;
    while (num != 0){
        decimal += (num%10)*pow(2, p);
        num = num/10;
        p += 1;
    }
    printf("%d\n", decimal);
}

int main() {
    int b;
    scanf("%d", &b);
    binary_to_decimal(b);
    return 0;
}