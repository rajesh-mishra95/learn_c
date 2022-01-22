#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void fibonacci(int num){
    long fib_num_0 = 0;
    long fib_num_1 = 1;
    long fib_num = fib_num_1;
    if (num == 1){
        printf("1\n");
    } else {
        while (num > 1){
            fib_num = fib_num_0 + fib_num_1;
            fib_num_0 = fib_num_1;
            fib_num_1 = fib_num;
            num -= 1;
        }
        printf("%ld\n", fib_num);
    }
}

int main() {
    long num;
    scanf("%ld", &num);
    fibonacci(num);
    return 0;
}