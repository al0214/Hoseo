//
//  lotto.c
//  C_Programming
//
//  Created by SamoYed on 6/12/24.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void lottoGameCheckSame(int *lotto, int size);
int sameCheck(int *lotto, int size, int number);
void printArray(int *lotto, int size);


int main(void){
    
    srand((unsigned int)time(NULL));
    
    int lotto[6] = {0};
    
    lottoGameCheckSame(lotto, 6);
    printArray(lotto, 6);
    
    return 0;
}

int sameCheck(int* lotto, int size, int number){
    
    for(int i = 0; i<size-1; i++){
        if(*(lotto+i) == number){
            return 1;
        }
    }
    return 0;
}

void lottoGameCheckSame(int* lotto, int size){
    int number = 0, check = 0;
    for(int i = 0; i<size; i++){
        number = (rand()%45)+1;
        check = sameCheck(lotto, i, number);
//        printf("구해진 number : %d ", number);
        if (check == 1) {
            i--;
            number = (rand()%45)+1;
        }
        else{
//            printf("직접 들어간 number : %d\n", number);
            *(lotto+i) = number;
        }
        
    }
}

void printArray(int* lotto, int size){
    for(int i = 0; i<size; i++){
        printf("%d \t", *(lotto+i));
        if(i==size-1){
            printf("\n");
        }
    }
}

| 구분    | 인간     | 컴퓨터        |
| ----- | ------ | ---------- |
| 학습    | 감각기관   | 감각 등록 장치   |
| 기억    | 단기기억   | 주 기억 장치    |
| ^      | 장기기억   | 보조 기억 장치   |
| 문제 해결 | 지식과 지혜 | 소프트웨어/인공지능 |
