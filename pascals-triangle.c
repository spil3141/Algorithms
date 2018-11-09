#include <stdio.h>
int main(){
    
    int rows =5;
    int size = 5;
    int i;
    int space;
    int star= 0;
        for(i = 1; i < rows; i++) {
        for(space = i; space < rows; space++)
            printf(" ");
        for(star =0; star < (2*i)-1; star ++)
            if(star==0 || star==2*i-2)
                printf("*");
            else
                printf(" ");
        printf("\n");
    }
    /* print last row */
    for(i=0; i<(2*size)-1; i++){
     printf("*");
    }
    
    printf("\n");
}

