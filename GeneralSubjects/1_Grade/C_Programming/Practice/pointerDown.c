//
//  pointer_2.c
//  C_Programming
//
//  Created by SamoYed on 6/10/24.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int* a, int* b);
void inputRandomArray(int* array, int size);
void printArray(int* array, int size);
void selectionSort(int* array, int size);
int main(void)
{
    
    int number[100];
    
    srand((unsigned int)time(NULL));
    
    inputRandomArray(&number[0], 100);
    selectionSort(&number[0], 100);
    printArray(&number[0], 100);

    return 0;
}

void inputRandomArray(int* array, int size){
    for(int i = 0; i< size; i++){
     *(array + i) = (rand() % 100) +1;
    }
}

void printArray(int* array, int size){
    for(int i = 0; i<size; i++){
        
        printf("%3d\t\t", *(array+i));
        if((i+1) % 10 == 0)printf("\n");
    }
}

void selectionSort(int* array, int size){
    int most;
    for(int i = 0; i< size-1; i++){
        most = i;
        for(int j = i+1; j < size; j++){
            if(array[most] < array[j]) most = j;
        }
        swap(&array[i], &array[most]);
    }
}

void swap(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
