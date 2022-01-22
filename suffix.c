#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void print_with_suffix(long n){
    if (n%100 >= 11 && n%100 <= 19){
        printf("%ldth\n", n);
    } else if (n%10 == 1){
        printf("%ldst\n", n);
    } else if (n%10 == 2){
        printf("%ldnd\n", n);
    } else if (n%10 == 3){
        printf("%ldrd\n", n);
    } else {
        printf("%ldth\n", n);
    }
}

int main() {
    long n;
    scanf("%ld", &n);
    print_with_suffix(n);
    return 0;
}