//
//  month.c
//  C_Programming
//
//  Created by SamoYed on 4/11/24.
//

#include <stdio.h>
#include <unistd.h>

char month(void);
int hackjum(void);

int main(void){
    while (1) {
        int a=0;
        int b=1;
        printf("몇월은 1번\n학점은 2번\n종료는 3번\n번호를 입력해 주세요 : ");
        scanf("%d", &a);
        switch (a) {
            case 1:
                month();
                sleep(b);
                break;
            case 2:
                hackjum();
                sleep(b);
                break;
            case 3:
                printf("코드가 멈춤니다\n");
                return 0;
            default:
                printf("잘못된 입력입니다.");
                sleep(b);
                break;
        }
    }
}

char month(void){
    int a = 0;
    printf("몇월인지 입력해주세요 : ");
    scanf("%d", &a);
    switch (a) {
        case 1:
            return printf("1월달은 31일까지 있습니다.\n");
            break;
        case 2:
            return printf("2월달은 28일 또는 윤년에는 29일까지 있습니다.\n");
            break;
        case 3:
            return printf("3월달은 31일까지 있습니다.\n");
            break;
        case 4:
            return printf("4월달은 30일까지 있습니다.\n");
            break;
        case 5:
            return printf("5월달은 31일까지 있습니다.\n");
            break;
        case 6:
            return printf("6월달은 30일까지 있습니다.\n");
            break;
        case 7:
            return printf("7월달은 31일까지 있습니다.\n");
            break;
        case 8:
            return printf("8월달은 31일까지 있습니다.\n");
            break;
        case 9:
            return printf("9월달은 30일까지 있습니다.\n");
            break;
        case 10:
            return printf("10월달은 31일까지 있습니다.\n");
            break;
        case 11:
            return printf("11월달은 30일까지 있습니다.\n");
            break;
        case 12:
            return printf("12월달은 31일까지 있습니다.\n");
            break;
        
            
        default:
            return printf("잘못된 입력입니다.\n");
            break;
    }

}
int hackjum(void){
    int a = 0;
    printf("몇 점인지 입력해주세요 : ");
    scanf("%d", &a);
    if (a >= 90){
        return printf("A 학점 입니다.\n");
    } else if(a >= 80){
        return printf("B 학점 입니다.\n");
    } else if(a >= 70){
        return printf("C 학점 입니다.\n");
    } else if(a >= 60){
        return printf("D 학점 입니다.\n");
    } else{
        return printf("F 학점 입니다.\n");
    }
}
