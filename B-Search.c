#include <stdio.h>
#include <stdlib.h>
#define MAX 50

int B_Search(int * array, int keyword){
    return 0;
}
int main(){
    int array[MAX];
	int i,target;
    target = 7;
	//printf("%lu\n", sizeof(array) / 4);
	for( i = 0;i< MAX; i++)
		array[i] = rand() % MAX;
	// BEFORE
	for( i = 0;i< MAX; i++)
		printf("%d,",array[i]);
	printf("\n");

    printf((B_Search(array,target) == 1) ? "Found !!\n" : "Not Found !!\n" );


    return 1;
}