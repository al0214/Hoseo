//
//  exec.c
//  C_Programming
//
//  Created by SamoYed on 4/15/24.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void number(void);
char checkNumber(void);

int main(void){
    checkNumber();
    return 0;
}

void number(void){
    int a = 0;
    printf("입력 받은 숫자 만큼 숫자가 출력됩니다 : ");
    scanf("%d", &a);
    for (int i=0; i<=a; i++) {
        if (i == a) {
            printf("%d\n", a);
            break;
        }
        printf("%d\t", i);
    }
}

char checkNumber(void){
    printf("숫자 맞추기 게임을 시작하겠습니다.");

    int a = rand() % 100 + 1, b=0;
    printf("값을 입력해 주세요");
    scanf("%d", &b);
    while (1) {
        if (b < a) {
            printf("값보다 작습니다");
        } else if (b > a){
            printf("값보다 큽니다.");
        } else if (b==a){
            return printf("정답입니다.");
        } else{
            printf("잘못된 접근입니다");
        }
    }
}
