#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAX 50

void bubble_sort(int *array);

int main(){
	int array[MAX];
	int i;
	//printf("%lu\n", sizeof(array) / 4);
	for( i = 0;i< MAX; i++){
		array[i] = rand() % MAX;
	} 	
	// BEFORE
	for( i = 0;i< MAX; i++){
		printf("%d,",array[i]);
	}
	printf("\n");

	bubble_sort(array);

	// After
	for( i = 0;i< MAX; i++){
		printf("%d,",array[i]);
	} 
	printf("\n");
}

void bubble_sort(int *array){
	int i,j;

	for(i = 0;i<MAX-1;i++){
		for(j= i+1; j<MAX;j++){
			if(array[i] > array[j]){
				int temp;
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}