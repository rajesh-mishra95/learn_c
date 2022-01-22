#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
    int num;
    int largest;
    int c;
    scanf("%d", &num);
    scanf("%d", &largest);
    int arr[largest];
    // Array initialisation
    for (int i = 0; i < largest; i++){
        arr[i] = 0;
    }
    // Storing the frequency of numbers
    for (int i = 0; i < num; i++){
        scanf("%d", &c);
        if (c >= 1 && c <= largest){
            arr[c-1] += 1;
        }
    }
    for (int i = 0; i < largest; i++){
        for (int j = 0; j < arr[i]; j++){
            printf("%d\n", i+1);
        }
    }
    return 0;
}