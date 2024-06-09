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
void bubbleSort(int* array, int size);  // 버블 정렬 함수 선언

int main(void)
{
    int number[100];
    
    srand((unsigned int)time(NULL));
    
    inputRandomArray(&number[0], 100);
    bubbleSort(&number[0], 100);  // 버블 정렬 함수 호출
    printArray(&number[0], 100);

    return 0;
}

void inputRandomArray(int* array, int size){
    for(int i = 0; i < size; i++){
        *(array + i) = (rand() % 100) + 1;
    }
}

void printArray(int* array, int size){
    for(int i = 0; i < size; i++){
        printf("%3d\t\t", *(array + i));
        if((i + 1) % 10 == 0) printf("\n");
    }
}

void bubbleSort(int* array, int size){  // 버블 정렬 함수 정의
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - 1 - i; j++){  // 인접한 두 요소를 비교
            if(array[j] < array[j + 1]) {  // 내림차순 정렬 조건
                swap(&array[j], &array[j + 1]);
            }
        }
    }
}

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
