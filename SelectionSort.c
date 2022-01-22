#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void sort(int count, int seq[]) {
    int idx = 0;
    int max = seq[0];
    for (int i = count; i > 1; i--) {
        for (int j = 0; j < i; j++) {
            if (seq[j] >= max) {
                max = seq[j];
                idx = j;
            }
        }
        seq[idx] = seq[i-1];
        seq[i-1] = max;
        for (int k = 0; k < count; k++) {
            printf("%d ", seq[k]);
        }
        printf("\n");
        max = seq[0];
    }
}

int main() {
    int count;
    scanf("%d", &count);
    int seq[count];
    for (int i = 0; i < count; i++) {
        scanf("%d", &seq[i]);
    }  
    sort(count, seq);
    return 0;
}