//
//  electionSortPrectice.c
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
    
    int number[SIZE], most, temp;
    
    for(int i = 0; i<SIZE; i++){
        number[i] = (rand()%10000)+1;
    }
    
    for(int i = 0; i<SIZE-1; i++){
        most = i;
        for(int j = i+1; j<SIZE; j++){
            if(number[most] < number[j]) most = j;
        }
        
        temp = number[i];
        number[i] = number[most];
        number[most] = temp;
    }
    
    for(int i = 0; i<SIZE; i++){
        printf("%5d\t\t", number[i]);
        if((i+1)%10==0) printf("\n");
    }
}
