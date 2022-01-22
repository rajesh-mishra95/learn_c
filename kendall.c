#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

float score(int num, int seq[]) {
    int total_pairs = num*(num-1)/2;
    int count = 0;
    for (int i = 0; i < num; i++) {
        for (int j = i; j < num; j++) {
            if (seq[i] > seq[j]) {
                count += 1;
            }
        }
    }
    return count*1.0/total_pairs;
}

int main() {
    int num;
    int seq[num];
    printf("%d\n", num);
    scanf("%d", &num);
    // int seq[num];
    for (int i = 0; i < num; i++) {
        scanf("%d", &seq[i]);
    }
    printf("%f\n", score(num, seq));
    return 0;
}