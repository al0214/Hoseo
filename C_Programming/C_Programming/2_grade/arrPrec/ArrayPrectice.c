//
//  ArrayPrectice.c
//  C_Programming
//
//  Created by SamoYed on 9/4/24.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100

int main(void){
    
    // unsigned int는 부호가 없는 정수형으로 - 부호가 나오지 못하고 더 많은 정수형을 표현할 수 있습니다
    // 랜덤 시드 초기화
    srand((unsigned int)time(NULL));
    
    int number[SIZE], total = 0, max, min;
    float avg = 0.0;
    
    for(int i = 0; i<SIZE; i++){
        number[i] = (rand()%100)+1;
    }
    
    for(int i = 0; i<SIZE; i++){
        printf("%3d\t\t", number[i]);
        if((i+1)%10==0) printf("\n");
    }
    
    for(int i = 0; i<SIZE; i++){
        total += number[i];
    }
    
    avg = (float)total / SIZE;
    
//   기본 버전
//    max = number[0];
//    min = number[0];
//    
//    for(int i = 1; i<SIZE; i++){
//        if(max < number[i]) max = number[i];
//        if(min > number[i]) min = number[i];
//    }
    
    max = 0;
    min = 0;

    for(int i = 1; i<SIZE; i++){
        if(number[max] < number[i]) max = i;
        if(number[min] > number[i]) min = i;
    }
    
    printf("avg = %f, max=%d, min = %d\n", avg, number[max], number[min]);
    
    
    return 0;
}
