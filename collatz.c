#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int num_collatz(int n){
    int num = 0;
    while (n != 1){
        if (n%2 == 0){
            n = n/2;
        } else {
            n = 3*n + 1;
        }
        num = num + 1;
    }
    return num;
}

void largest_collatz(int n){
    int value, value_i;
    value = value_i = 0;
    int largest_num = 0;
    for (int i = 1; i < n+1; i++){
        value_i = num_collatz(i);
        if (value_i >= value){
            value = value_i;
            largest_num = i;
        } 
    }
    printf("%d\n", largest_num);
    printf("%d\n", value);
}

int main() {
    int num;
    scanf("%d", &num);
    largest_collatz(num);
    return 0;
}