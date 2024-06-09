#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void swap(int* a, int* b);
void inputRandomArray(int* array, int size);
void printArray(int* array, int size);
void bubbleSort(int* array, int size);

int main(void)
{
    int number[SIZE];
    
    srand((unsigned int)time(NULL));
    
    inputRandomArray(&number[0], SIZE);
    printf("Initial array:\n");
    printArray(&number[0], SIZE);
    
    bubbleSort(&number[0], SIZE);
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

void bubbleSort(int* array, int size){
    int swapped;
    for(int i = 0; i < size - 1; i++){
        swapped = 0;
        for(int j = 0; j < size - 1 - i; j++){
            if(array[j] > array[j + 1]) {  // 오름차순 정렬 조건
                swap(&array[j], &array[j + 1]);
                swapped = 1;
            }
            // 내림차순 정렬을 원한다면 위 조건을 주석 처리하고 아래 주석을 해제하세요.
            // if(array[j] < array[j + 1]) {  // 내림차순 정렬 조건
            //     swap(&array[j], &array[j + 1]);
            //     swapped = 1;
            // }
        }
        // 현재 배열 상태를 출력합니다.
        printf("Step %d: ", i + 1);
        printArray(array, size);
        
        // 만약 더 이상 교환이 발생하지 않으면 정렬이 완료된 것입니다.
        if(!swapped) break;
    }
}

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
