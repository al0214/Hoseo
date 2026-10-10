//
//  exec_2.c
//  C_Programming
//
//  Created by SamoYed on 4/15/24.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int checkNumber(void);

int main(void)
{
    int cont = 1;
    
    // unsigned int는 부호가 없는 정수형으로 - 부호가 나오지 못하고 더 많은 정수형을 표현할 수 있습니다
    unsigned int seed = (unsigned int)time(NULL);
    
    // 랜덤 시드 초기화
    srand(seed);
    
    while(cont){
        checkNumber();
        printf("continue? 1 - yes, 0 - exit: ");
        scanf("%d", &cont);
    }
    return 0;
}


int checkNumber(void){
    printf("\n숫자 맞추기 게임을 시작하겠습니다.\n");
    printf("총 기회는 10번 입니다.\n");
    int count = 10;
    int a = rand() % 100 + 1, b=0;
    while (1) {
        printf("값을 입력해 주세요: ");
        scanf("%d", &b);
        
        
        
        if (b < a) {
            printf("값보다 작습니다\n");
            --count;
        } else if (b > a){
            printf("값보다 큽니다.\n");
            --count;
        } else {
            printf("정답입니다.\n");
            return 0;
        }
        if(count == 0){
            printf("기회가 모두 소진되어 프로그램이 종료됩니다.");
            return 0;
        }
        printf("기회는 %d번 남았습니다\n", count);
    }
}




