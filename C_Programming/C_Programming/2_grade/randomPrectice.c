//
//  randomPrectice.c
//  C_Programming
//
//  Created by SamoYed on 9/4/24.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    
    // unsigned int는 부호가 없는 정수형으로 - 부호가 나오지 못하고 더 많은 정수형을 표현할 수 있습니다
    // 랜덤 시드 초기화
    srand((unsigned int)time(NULL));
    
    int number[10];

    for(int i = 0; i<10; i++){
        number[i] = (rand()%100)+1;
    }
    
    for(int i = 0; i<10; i++){
        printf("number = %d\n", number[i]);
    }
    
    return 0;
}
