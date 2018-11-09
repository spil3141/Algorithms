#include <stdio.h>
#include <stdlib.h>
#include "isPrime.h"

int main(){
    int count = 1;
    while(count <=50){
        printf("%d is ", count);
        printf(isPrime(count) ? "Prime\n" : "Not Prime\n");
        count++;
    }
    return 1;
}
/*
int i,j,k;
    int size = 5;

    for(i = 0;i<size;i++){
        for(k=i;k<size-1;k++){
            printf(" ");
        }
        printf("*");
        for(j = size; j < ((size -1)*2);j++){
            printf("*");
        }
        printf("\n");
    }
*/