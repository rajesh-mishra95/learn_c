#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool is_prime(long num){
    bool is_p = true;
    for (long i = 2; i < sqrt(num); i++){
        if ((num/i)*i == num){
            is_p = false;
            break;
        }
    }
    return is_p;
}

int main() {
    long num;
    scanf("%ld", &num);
    if (is_prime(num)){
        printf("prime\n");
    } else {
        printf("not prime\n");
    }
    return 0;
}