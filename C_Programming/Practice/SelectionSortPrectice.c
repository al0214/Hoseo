//
//  SelectionSortPrectice.c
//  C_Programming
//
//  Created by SamoYed on 6/10/24.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 5

void swap(int* a, int* b);
void inputRandomArray(int* array, int size);
void printArray(int* array, int size);
void selectionSort(int* array, int size);

int main(void)
{
    int number[SIZE];
    
    srand((unsigned int)time(NULL));
    
    inputRandomArray(&number[0], SIZE);
    printf("Initial array:\n");
    printArray(&number[0], SIZE);
    
    selectionSort(&number[0], SIZE);
    printf("Sorted array:\n");
    printArray(&number[0], SIZE);

    return 0;
}

void inputRandomArray(int* array, int size){
    for(int i = 0; i < size; i++){
        *(array + i) = (rand() % 100) + 1;
    }
}

void printArray(int* array, int size){
    for(int i = 0; i < size; i++){
        printf("%3d\t", *(array + i));
    }
    printf("\n");
}

void selectionSort(int* array, int size){
    for(int i = 0; i < size - 1; i++){
        int minIndex = i;  // 최솟값의 인덱스를 저장하는 변수 초기화
        for(int j = i + 1; j < size; j++){
            if(array[j] < array[minIndex]) {  // 최솟값을 찾으면 인덱스 업데이트
                minIndex = j;
            }
        }
        swap(&array[i], &array[minIndex]);  // 최솟값과 현재 위치의 요소를 교환
        
        // 현재 배열 상태를 출력합니다.
        printf("Step %d: ", i + 1);
        printArray(array, size);
    }
}

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
#include <stdio.h>
