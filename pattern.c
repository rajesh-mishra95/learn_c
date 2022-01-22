#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool is_prime(int num){
    bool is_p = true;
    for (int i = 2; i <= sqrt(num); i++){
        if ((num/i)*i == num){
            is_p = false;
            break;
        }
    }
    return is_p;
}

void print_pattern(int n, int h) {
    int leading_num = 1;
    int starting_num = 0;
    bool contains_prime = false;
    for (int j = h; j > 0; j--) {
        leading_num += n*(h-j);
        starting_num = leading_num;
        for (int i = 0; i < j-1; i++) {
            printf(" ");
        }
        for (int i = 0; i < 2*(h-j)+1; i++) {
            for (int k = starting_num; k < starting_num + (h-j+1)*n; k += h-j+1){
                // printf("%d", k);
                if (is_prime(k)){
                    contains_prime = true;
                    break;
                }
            }
            if (contains_prime) {
                printf("#");
            } else {
                printf(" ");
            }
            starting_num += 1;
            contains_prime = false;
        }
        for (int i = 0; i < j-1; i++) {
            printf(" ");
        }
        printf("\n");
    }
}

int main() {
    int interval, height;
    scanf("%d %d", &interval, &height);
    print_pattern(interval, height);
    return 0;
}